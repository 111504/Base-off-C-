#include <stdio.h>
void saHi(int );
    
    
    


int main() { 
    
    void (*funptr)(int);
    funptr=saHi;
    funptr(3);
    return 0; 
} 

void saHi(int n) { 
    printf("n = %d\n", n); 
    
}
