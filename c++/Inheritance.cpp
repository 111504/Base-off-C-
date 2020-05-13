#include <iostream>

using namespace std;

class  Shape
{
protected:
    int width;
    int height;
    /* data */
public:
    void setWidth(int w){

        width=w;
    }
    void setHeight(int H){

        height=H;
    }
     
};
class PainCost{
   public :
      int getCost(int area){

           return area*70;           
      }
};
class Rectangle:public Shape,public PainCost{
       public:
          int getArea(){

              return (width*height);
          }

};

int main(){
    Rectangle rec;
    int area;
    
    rec.setHeight(5);
    rec.setWidth(6);
    area=rec.getArea();
    cout<<"Total area: "<<rec.getArea()<<endl;
    cout<<"Toal paint cost: $"<<rec.getCost(area)<<endl;
    return 0;



}