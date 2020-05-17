
#include <iostream>
using namespace std;
 struct  Complex{
    Complex(double r,double i):re(r),im(i){}
    Complex operator+(Complex &other);
    void Display(){
        cout<<re<<","<<im<<endl;
    }
    private:
         double re,im;
};

Complex Complex::operator+(Complex &other){
     cout<<&other<<endl;
     return Complex(re+other.re,im+other.im);


}
int main(){
     Complex a=Complex(1.2,3.4);
     Complex b=Complex(5.6,7.8);
     Complex c=Complex(0.0,0.0);
     cout<<&a<<endl;
     c=a+b;
     c.Display();

}
