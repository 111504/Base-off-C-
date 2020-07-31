#include <stdio.h>
#include <stdbool.h>
#define BLOCK 9
#define SUBBLOCK 3
#define CELLS (BLOCK*BLOCK)
int  place_number(int n, int sudoku[BLOCK][BLOCK])
{
  if (n == CELLS) {
    for (int i = 0; i < BLOCK; i++) {
      for (int j = 0; j < BLOCK; j++)
	          printf("%d ", sudoku[i][j]);
      printf("\n");
    }
    return true;
  }
 
  int row = n/BLOCK;
  int col = n%BLOCK;
  if (sudoku[row][col] != 0)
      return(place_number(n + 1, sudoku));
  
  
  for (int try = 1; try <= BLOCK; try++) {
      bool conflict = false;
      for (int i = 0; i < BLOCK && !conflict; i++)
          if (((col != i) && (sudoku[row][i]==try)) || ((row != i) && (sudoku[i][col]==try)))
	            conflict = true;
          if (!conflict) {
              int block_row = row / SUBBLOCK;
              int block_col = col / SUBBLOCK;
              for (int i = 0; i < 3 && !conflict; i++)
	                for (int j = 0; j < 3 && !conflict; j++)
	                    if (sudoku[3*block_row+i][3*block_col+j] == try)
	                      conflict = true;
                      if (!conflict) {
	                      sudoku[row][col] = try;
	                    if (place_number(n + 1, sudoku)){
                         
	                       return true;
                      }
                      }
          }
  }
  
  sudoku[row][col] = 0;
  return false;
}
 
int main(void)
{
  int i, j;
  int sudoku[BLOCK][BLOCK];
  for (i = 0; i < BLOCK; i++)
    for (j = 0; j < BLOCK; j++)
      scanf("%d", &(sudoku[i][j]));
 
  place_number(0, sudoku);
  return 0;
}