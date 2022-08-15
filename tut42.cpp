#include<iostream>
#include<math.h>
using namespace std;
class Simple_Calculator{
protected:
int a, b;
public:
void setdata(int x, int y){
    a = x;
    b = y;
}
void display_simple(void){
    cout<<"addition of "<<a<<" and  "<<b<<"gives: "<<a+b<<endl;
    cout<<"subtraction of "<<a<<" and  "<<b<<"gives: "<<a-b<<endl;
    cout<<"multition of "<<a<<" and  "<<b<<"gives: "<<a*b<<endl;
    cout<<"division of "<<a<<" by  "<<b<<"gives: "<<a%b<<endl;
    }
};

class Scientific_Calculator{
    double a, b;
    public:
    void setdatascientific(double x, double y){
        a = x;
        b = y;
    }
    void display_scientific(void){
        cout<<"sin of "<<a<<" is"<<sin(a)<<endl;
        cout<<"cos of "<<a<<" is"<<cos(a)<<endl;
        cout<<"tan of "<<a<<" is"<<tan(a)<<endl;
        cout<<"sin of "<<b<<" is"<<sin(b)<<endl;
        cout<<"cos of "<<b<<" is"<<sin(b)<<endl;
        cout<<"tan of "<<b<<" is"<<sin(b)<<endl;
        cout<<"using the power function: "<<pow(a,b)<<endl;
        cout<<"sqrt: "<<sqrt(a)<<endl;
    }
};
 
class Hybridcalculator : public Simple_Calculator, public Scientific_Calculator{
    public:
    void display_operations(void){
        display_scientific();
        display_simple();
    }

};



int main(){
    Hybridcalculator c1;
    c1.setdata(4,5);
    c1.setdatascientific(6,9);
    c1.display_operations();
}