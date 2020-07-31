#include <stdio.h>
int main(){
int i=10;
int *iptr1;
int *iptr2;
iptr1=&i;
iptr2=iptr1;
printf("iptr1= %d\n",*iptr1);
int j=*iptr1;
printf("j= %d",*iptr1);
}
