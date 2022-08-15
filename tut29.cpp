#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    Complex (void); // Constructor declaration
    void printnumber(void){
        cout<<"the complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void){ // ----> This is a default constructor as it takes no parameters
    a = 10;
    b = 20;
}
int main()
{
    Complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}