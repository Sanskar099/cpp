#include<iostream>//MULTIPLE INHERITANCE
using namespace std;
class Base1{
protected:
int base1;
public:
void set_base1(int b1){
    base1 = b1;
}
};
class Base2{
protected:
int base2;
public:
void set_base2(int b2){
    base2 =  b2;
}
};
class Base3{
protected:
int base3;
public:
void set_base3(int b3){
    base3 = b3;
}
};
class derived : public Base1, public Base2, public Base3{
public:
void show_data(void){
     cout<<"Base1 data is: "<<base1<<endl;
     cout<<"Base2 data is: "<<base2<<endl;
     cout<<"Base3 data is: "<<base3<<endl;
}
};
int main(){
    derived hey;
    hey.set_base1(23);
    hey.set_base2(33);
    hey.set_base3(43);
    hey.show_data();
    return 0;
}
