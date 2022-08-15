// COPY CONSTRUCTOR
#include<iostream>
using namespace std;

class Number{
int a;
public:
Number(){
  a = 0;
}
Number(int num){
   a = num;
}
Number(Number &obj){
    cout<<"copy constructor invoked!!!!!"<<endl;
   a = obj.a;
}
void display(void){
    cout<<"the number is : "<<a<<endl;
}
};
int main(){
    Number x,y,z(46),z2;
    x.display();
    y.display();
    z.display();
    
    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}