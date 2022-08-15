/*Dynamic Initialization of Objects Using Constructors
The dynamic initialization of the object means that the object is initialized at the runtime.
Dynamic initialization of the object using a constructor is beneficial when the data is of different formats. */
#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float resultValue;
    float interestRate;

public:
    BankDeposit(){};// in certain cases the compiler needs a constructor which wont do anything if u were to give it an object which has no arguments to pass otherwise the whole code would give error
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void resultamt(void);
};
BankDeposit ::BankDeposit(int p, int y, int  r)
{
    principal = p;
    years = y;
    interestRate = float(r)/ 100;
    resultValue = principal;
    for (int i = 0; i < y; i++)
    {
        resultValue = resultValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    resultValue = principal;
    for (int i = 0; i < y; i++)
    {
        resultValue = resultValue * (1 + interestRate);
    }
}
void BankDeposit ::resultamt(void)
{
    cout << "the resulting ammount after " << years << " years is : " << resultValue << endl;
}
int main()
{
    BankDeposit b1, b2;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p, y and r respectively : " << endl;
    cin >> p >> y >> r;
    b1 = BankDeposit(p, y, r);
    b1.resultamt();
     
    cout<<"enter the values of p,y and R : "<<endl;
    cin>>p>>y>>R;
    b2 = BankDeposit(p, y, R);
    b2.resultamt();
    return 0;
}