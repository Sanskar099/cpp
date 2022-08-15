#include<iostream>
using namespace std;
int main(){
    int marks[4] = {24,25,26,27};
    int i;
   // for(i=0;i<4;i++)
   // {
   //     cout<<"the value of "<<i<<" is: "<<marks[i]<<endl;
   // }

   //ARRAYS AND POINTERS
   int* p = marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    return 0;
}