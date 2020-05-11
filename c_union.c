#include <stdio.h>
typedef  struct {
    union {
       char name;   
       int foot;
       double hand;
    }value;
    
    enum {CHAR,INT,DOUBLE} type;
    
}Body;

void Store_Name(Body *body,char role_name){
    body->value.name=role_name;
    body->type=CHAR;
}

void Store_Body(Body *body,int foot_long){
    body->value.foot=foot_long;
    body->type=INT;
}
void Store_Hand(Body *body,double hand_long){
    body->value.hand=hand_long;
    body->type=DOUBLE;
    
}

void Print(Body *body){
    switch (body->type){
       case CHAR:
          printf("Enter char %c\n",body->value.name);
          break;
       case INT:
          printf("Enter int  %d\n",body->value.foot);
          break;
       case DOUBLE:
          printf("Enter double %f\n",body->value.hand); 
          break;
        
    }
}

int main(){
   Body a;
   Store_Name(&a,'A');
   Print(&a);
   Store_Body(&a,10);
   Print(&a);
   return 0;    
    
    
    
}    
