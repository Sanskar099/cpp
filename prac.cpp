#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int a, b;

public:
    int Sumrealcomplex(Complex, Complex);
    int Sumimagcomplex(Complex, Complex);
};
class Complex
{
    int a;
    int b;

public:
    friend class Calculator;
    void setdata(int n, int m)
    {
        a = n;
        b = m;
    }
    void display(void)
    {
        cout << "your complex number is: " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::Sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::Sumimagcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setdata(4, 5);
    o1.display();
    o2.setdata(6, 7);
    o2.display();
    Calculator calc;
    int res = calc.Sumrealcomplex(o1, o2);
    cout << "sum of the real part is: " << res << endl;

    int resi = calc.Sumimagcomplex(o1, o2);
    cout << "sum of the imaginary part is: " << resi << endl;
    return 0;
}