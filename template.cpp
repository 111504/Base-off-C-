#include <iostream>
using namespace std;
template<typename T>
void swap(T var1,T var2){
  T temp;
  var1=var2;
  var2=temp;
}
int main(){
   int v1=1;
   int v2=2;
   swap(v1,v2);

   cout<<v1<<" "<v2<<endl;

}
