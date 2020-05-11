#include <stdio.h>
int Fab(int n){
    printf("%d\n",n);
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    
    return  Fab(n-1)+Fab(n-2);
        
    
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",Fab(n));
    
    
}
