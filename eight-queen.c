#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#define QUEEN 8
void placeQueen(int i,int queenPos[QUEEN]){
       if(i==QUEEN){
            for(int k=0;k<QUEEN;k++){
                printf("%d",queenPos[k]);
            }
            printf("\n");
            return;
        }
        for(int k=0;k<QUEEN;k++){
                bool conflict =false;
                for(int j=0;j<i&&!conflict;j++)
                     if(queenPos[j]==k||abs(k-queenPos[j])==(i-j))
                         conflict=true;
                
                if(!conflict){
                    queenPos[i]=k;
                    placeQueen(i+1,queenPos);
                }
        }

}
int main(){
 
     int queenPos[QUEEN];
     placeQueen(0,queenPos);
     return 0;
}