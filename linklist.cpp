#include <iostream>
using namespace std;
void PointerFunc(int a,int b){
        int temp;
        temp=a;
        a=b;
        b=temp;

} 
int main(){
int one=10;
int two=12;
int three=14;
int *next;
int *next2;
next=&two;
next2=&three;
PointrFunc(next,next2);
cout<<two<<" "<<three<<endl;


}
