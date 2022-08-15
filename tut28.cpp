#include<iostream>
using namespace std;
class c2;
class c1{
 int val1;
 friend void exchange(c1 &, c2 &);
 public:
 void indata(int a){
     val1 = a;
 }
 void display(void){
     cout<<val1<<endl;
 }
};

class c2{
    int val2;
     friend void exchange(c1 &, c2 &);
    public:
    void indata(int a){
        val2 = a;
    }
    void display(void){
        cout<<val2<<endl;
    }
};
//using call by reference below
void exchange(c1 &x, c2 &y){
 int tmp = x.val1;
 x.val1 =y.val2;
 y.val2 = tmp;
}  
int main(){
    c1 o1;
    c2 o2;
    o1.indata(3);
    o2.indata(4);
    exchange( o1,  o2);
    cout<<"the value of c1 after exchange is: ";
    o1.display();
    cout<<"the value of c2 after exchange is : ";
    o2.display();
    return 0;
}