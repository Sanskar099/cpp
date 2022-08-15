#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex (int,int); // parameterized Constructor declaration
    void printnumber(void){
        cout<<"the complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x, int y){ // ----> This is a parameterized constructor as it takes 2 parameters
    a = x;
    b = y;
}
int main(){
    Complex c(4,6); // implicit call
    c.printnumber();
    Complex b = Complex(5,9); 
    return 0;
}