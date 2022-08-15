#include <iostream>
using namespace std;
int main()
{
int a =4, b=5;
cout<<"The value of a + b is :  "<<a+b<<endl;
cout<<"The value of a - b is :  "<<a-b<<endl;
cout<<"The value of a * b is :  "<<a*b<<endl;
cout<<"The value of a / b is :  "<<a/b<<endl;
cout<<"The value of a % b is :  "<<a%b<<endl;
cout<<"The value of a ++ is :  "<<a++<<endl;
cout<<"The value of ++a is :  "<<++a<<endl;
//comparison operators are: <,>,==,!=,<=,>=
//logical operators:
cout<<"Following are the logical operators in c++:"<<endl;
cout<<"the value of logical and operator (a==b)&&(a<b) is: "<<((a==b) && (a<b))<<endl;
cout<<"the value of logical or operator (a==b)||(a<b) is: "<<((a==b) || (a<b))<<endl;
cout<<"the value of logical not operator !(a==b): "<<(!(a==b))<<endl;
return 0;
}
