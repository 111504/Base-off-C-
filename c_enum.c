/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
enum Move{
       
     Top=1,
     Down=-1,
     Left,
     Right
     
   };
void PrintMove(enum Move move){
    printf("%d\n",move);
    
}


int main()
{
   
   printf("%d\n",Top+1);//enum can add
   PrintMove(Down);//use enum to function 
   return 0;
}
