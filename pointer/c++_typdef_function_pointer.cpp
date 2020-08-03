#include <iostream>
using namespace std;
typedef int (*t_somefunc)(int,int);

int Test(int a,int b){
 return a*b;
}

int main(){
	
	t_somefunc afunc=&Test;
	
	int answer=(*afunc)(100,200);
	cout<<answer<<endl;
     system("pause"); 
}
