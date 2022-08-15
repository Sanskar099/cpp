#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    A(){
        a = 0;
        b = 0;
    }
    A(int x, int y){
        a = x;
        b = y;
    }
    A(int x){
        a = x;
        b = 69;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    A z(2,3), z1(45);
    A f2;
    z.display();
    z1.display();
    f2.display();
    return 0;
}