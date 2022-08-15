#include<iostream>
using namespace std;
 
 struct Employee
 {
    private:
    int a, b, c;
    public:
    int d,e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"the value of a is: "<<a<<endl;
        cout<<"the value of b is: "<<b<<endl;
        cout<<"the value of c is: "<<c<<endl;
        cout<<"the value of d is: "<<d<<endl;
        cout<<"the value of e is: "<<e<<endl;
    }
 };
 void Employee :: setData(int a1, int b1, int c1){ //SYNTAX FOR MENTIONING A FUNCTION WHICH HAS BEEN USED INSIDE A CLASS
     a = a1;
     b = b1;
     c = c1;
 }

int main(){
     Employee kekw;
     //kekw.a = 34 will throw an error since the int a is private
     kekw.d = 34;
     kekw.e = 79;
     kekw.setData(1,2,4);
     kekw.getData();
    return 0;
}