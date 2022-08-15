#include<iostream>
using namespace std;
class Employee{
    string name;
    int year;
    string address;
    public:
    Employee(string n, int y, string add){
        name = n;
        year = y;
        address = add;
    }
    void display(void){
        cout<<name<<"  "<<year<<"  "<<address<<endl;
    }

};
int main(){
    Employee Jason("Jason",1989,"345 Wellberg");
    Employee Dalton("Dalton",1991,"346 Wellberg");
    Employee Jacob("Jacob",1994,"348 Wellberg");

    cout<<"Name  Year  Address"<<endl;
    Jason.display();
    Dalton.display();
    Jacob.display();
    return 0;
}