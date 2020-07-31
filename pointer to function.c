/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*int (*func_ptr)() = func;無參數*/
#include <stdio.h>
int func(int a,int b){
    
    return a+b;
}
int add_func(int a,int b,int (*func_ptr)(int ,int)){
    int c;
    printf("*func_ptr=%p\n", *func_ptr);
    c=func_ptr(a,b);
    return  c;
    
}
int main()
{
    
   int d=add_func(10,20,func);
   printf("%d\n", d);
   printf("%p\n",func);
    return 0;
}
