#include <iostream>
using namespace std;
template <typename T> void Swap(T &a,T &b){
   T temp=a;
   a=b;
   b=temp;
}

/*template<class T> void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}*/
template <typename T>T max(T a, T b,T c);
int main(){
     int n1=100,n2=200;
     Swap(n1,n2);
     cout<<n1<<"  "<<n2<<endl;

    float f1 = 12.5, f2 = 56.93;
    Swap(f1, f2);
    cout<<f1<<", "<<f2<<endl;


    char c1 = 'A', c2 = 'B';
    Swap(c1, c2);
    cout<<c1<<", "<<c2<<endl;


    bool b1 = false, b2 = true;
    Swap(b1, b2);
    cout<<b1<<", "<<b2<<endl;\

    int i1,i2,i3,i_max;
    cin>>i1>>i2>>i3;
    i_max=max(i1,i2,i3);
    cout<<"i_max"<<i_max<<endl;

    return 0;
}

template <typename T>
T max(T a,T b,T c ){
   T max_num=a;
   if(b>max_num) max_num=b;
   if(c>max_num) max_num=c;
     return max_num;
}
