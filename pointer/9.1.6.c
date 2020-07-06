#include <stdio.h>
int main(){
    int i,k;
    int *iptr=&i;
    scanf("%d",&i);
    printf("iptr = %p\n",iptr);
    printf("&iptr = %p\n",&iptr);
    printf("*iptr = %d\n",*iptr);
    printf("*(&iptr) = %p\n",*(&iptr));
    printf("&(*iptr) = %p\n",&(*iptr));
    printf("*(*(&iptr)) = %d\n",*(*(&iptr)));
    printf("*(&(*iptr)) = %d\n",*(&(*iptr)));
    printf("&(*(&iptr)) = %p\n",&(*(&iptr)));
    printf("&i=%p\n",&i);
    printf("*(&i)=%d\n",*(&i));
    return 0;
}
