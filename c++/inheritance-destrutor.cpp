#include <iostream>

using namespace std;

class Line
{

    public:
      void setLength(double len);
      double getLength(void);
      Line();
      ~Line();

    private: 
       double Length;
};

Line::Line(void){
    cout<<"Object is being created"<<endl;
}
Line::~Line(void){
    cout<<"Object is being detelted"<<endl; 
}
void Line::setLength(double len){
       Length=len;

}

double Line::getLength(void){
       return Length;
}

int main(){
      Line line;
      line.setLength(6.0);
      cout<<"Length of line : "<<line.getLength()<<endl;

      return 0;


}