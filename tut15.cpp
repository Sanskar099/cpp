#include<iostream>
using namespace std;
int sum(int, int);
void g(void);
int main(){
    int num1,num2;
    cout<<"enter the value of 1st number: "<<endl;
    cin>>num1;
    cout<<"enter the value of 2nd number: "<<endl;
    cin>>num2;
    cout<<"The sum of these numbers is: "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
void g()
{
    cout<<"hello, hope u are fine :D";
}