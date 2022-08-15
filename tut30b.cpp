#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaynumber(void)
    {
        cout << "the point is : (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Point c1(4, 5);
    c1.displaynumber();
    Point c2 = Point(7, 9);
    c2.displaynumber();
    return 0;
}