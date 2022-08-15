#include <iostream>
using namespace std;

class employee
{
    int id;
    int static count;

public:
    void setdata(void)
    {
        cout << "enter the id of the employee: " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is : " << id << " and this is employee number: " << count << endl;
    }
    static void intcount(void)
    {
        cout << "this is employee number: " << count << endl;
    }
};
int employee ::count = 1000; // default is 0
int main()
{
    employee harry, rohan, lovish;
    harry.setdata();
    harry.getdata();
    employee ::intcount();
    rohan.setdata();
    rohan.getdata();
    employee ::intcount();
    lovish.setdata();
    lovish.getdata();
    employee ::intcount();

    return 0;
}
