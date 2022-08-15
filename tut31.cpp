#include<iostream>
using namespace std; // FUNCTION OVERLOADING
class Complex{
 int a, b;
 public:
 Complex(int x, int y){
     a = x;
     b = y;
 }
 Complex(int x){
     a =x;
     b = 4;
 }
 Complex(){
     a =69;
     b = 420;
 }
 void printnumber(void){
     cout<<"the number is: "<<a<<" + "<<b<<"i"<<endl;
 }
};
int main(){
    Complex c1(3,5);
    c1.printnumber();
    Complex c2(6);
    c2.printnumber();
    Complex c3;
    c3.printnumber();
    return 0;
}