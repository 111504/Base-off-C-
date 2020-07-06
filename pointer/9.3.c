#include <stdio.h>
#define ARRAYSIZE 5
int main(){
    int a[ARRAYSIZE];
    int b[6]={0,1,2,3,4,5};
    int *ptr_to_b;
    ptr_to_b=b;
    printf("*ptr_to_b = %d\n",*ptr_to_b);
    ptr_to_b++;
    printf("*ptr_to_b = %d\n",*ptr_to_b);
    for(int i=0;i<ARRAYSIZE;i++){
        scanf("%d",&(a[i]));
    }

     int *ptr=a;
     for(int i=0;i<ARRAYSIZE;i++,ptr++){
         printf("%p\n",ptr);
         *ptr+=3;
     }
     for(int i=0;i<ARRAYSIZE;i++){
        printf("a[%d] = %d\n",i,a[i]);

     }
     return 0;

}
