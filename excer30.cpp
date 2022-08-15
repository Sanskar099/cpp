// Q1. Create a cpp program to compute the distance between two points using the sqrt function and friend function.

#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    friend point distance(point o1, point o2);
};
point distance(point o1, point o2)
{
    double dist;
    dist = sqrt((o1.a - o2.a) * (o1.a - o2.a) + (o1.b - o2.b) * (o1.b - o2.b));
    cout << "the distance is: " << dist << endl;
}
int main()
{
    point c1(4, 5);
    point c2(2, 3);
    distance(c1, c2);
    return 0;
}