#include<iostream>
using namespace std;
int main(){
    int a =3;
    int * b = &a;
  
    // & ---> (Address of) Operator
   //cout<<"The address of a is "<<&a<<endl;
    //cout<<"The address of a is "<<b<<endl;

    // * --> (value of) operator
    //cout<<"the value at b is"<<*b<<endl;
     int** c = &b;
     cout<<"the address of b: "<<&b<<endl;
     cout<<"the address of b: "<<c<<endl;
     cout<<"the value at c is: "<<*c<<endl;
     cout<<"the value at value_at(value_at(c)) is: "<<**c<<endl;
   return 0;
}