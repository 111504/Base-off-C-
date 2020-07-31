#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int STRCMP (const char *p1, const char *p2)
{
  const unsigned char *s1 = (const unsigned char *) p1;
  cout<<*s1<<" "<<endl;
  const unsigned char *s2 = (const unsigned char *) p2;
  cout<<*s2<<" "<<endl;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      cout<<"c1="<<c1<<endl;
      c2 = (unsigned char) *s2++;
      cout<<"c2="<<c2<<endl;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}
int main(){
  /* char t[]="abbcd";
   char *tt;
   tt=t;
   cout<<*tt<<endl;
   cout<<tt<<endl;
   cout<<*(tt+1)<<endl;
   cout<<(tt+1)<<endl;
    cout<<&t<<endl;
    cout<<&tt<<endl;
    cout<<&(*tt)<<endl;
    int size = 2, i;
int arr[2]={3,5};
int *ptr;
ptr = arr;    //將ptr指向array
// 1.記憶體位址
for(i=0; i<size; i++)
    printf("&arr[%d]: %p, ptr+%d: %p\n", i, &arr[i], i, ptr+i);
// 2.值的存取
arr[0] = 0;
*(ptr+1) = 1;
for(i=0; i<size; i++)
    printf("arr[%d]: %d, *(ptr+%d): %d\n", i, arr[i], i, *(ptr+i));*/

    int n=STRCMP("a z","an ");
    cout<<n<<endl;

}
