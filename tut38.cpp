#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}
class derived : public Base
{
public:
    int data3;
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "the value of 1 is: " << getdata1() << endl;
    cout << "the value of 2 is: " << data2 << endl;
    cout << "hte value of 3 is: " << data3 << endl;
}

int main()
{
    derived d;
    d.setdata();
    d.process();
    d.display();
    return 0;
}