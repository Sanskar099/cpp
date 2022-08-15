#include<iostream>
using namespace std;
class Reverse{
   int n, rev,n1,n2;
   public:
   void input(){
       cout<<"enter a number"<<endl;
       cin>>n;
   }
  
   void calc(){
       rev = 0;
       while(n){
          
           cout<<n <<endl;
           n-= 2;
           
       }
       
   }
 
};
int main(){
   Reverse r1;
   r1.input();
   r1.calc();
    return 0;
}