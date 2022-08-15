// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string.h>
using namespace std;

class binary
{
private:
    string s; //by default the objects of a class are private.
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number: ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++) // there is a function called length in string header file, returns number of
    {                                    // characters present in the string.
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout << "the number is not binary"<<endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{                           // we can call chk_bin(); here too just if we dont want chk bin to be public.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binary ::display(void)
{
    cout << "displaying your binary number after ones compliment: "<< endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary g;
    g.read();
    g.chk_bin();
    g.ones_compliment();
    g.display();
    return 0;
}