#include<iostream>
using namespace std;
inline int product(int a, int b)
{
    return a*b;
}
float moneybank(int moneydeposited, float factor = 1.04) // default arguments
{
    return moneydeposited*factor;
}
// int strlnth(const char *p)   for keeping an argument constant in a function
int main(){
    
   //int a= 4, b = 3;
   //cout<<"the product of a and b is : "<<product(a,b)<<endl;
   int money = 100000;
   cout<<"if u have "<<money<<" Rs, then after a year you will recieve: "<<moneybank(money)<<endl;
   cout<<"if u deposit "<<money<<" in xyz bank then after a year u will recieve "<<moneybank(money,1.06)<<endl;
   return 0; 
}