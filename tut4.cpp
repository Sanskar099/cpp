#include <iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main()
{
    int glo= 9;
    glo= 78;

    int a= 12, b=16;
    float pi= 3.14;
    char c ='d';
    bool is_true = true;
    sum();
    cout<<glo<<is_true;
    return 0;

}