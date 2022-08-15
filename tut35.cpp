#include<iostream>
using namespace std;
//destructor doesnt take any arguments, nor does it returns anything.
int count = 0;
class num{
     public: 
     num(){
         count++;
         cout<<"this is hte time when my object is called for object number: "<<count<<endl;
     }
     ~num(){
         cout<<"this is the time when the destructor is called for object number: "<<count<<endl;
         count--;
     }
};
int main(){
    cout<<"we are inside of our main code"<<endl;
    cout<<"creating our first object"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating 2 more objects in this very block"<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}