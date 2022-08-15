#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;
public:
 void setid(void){
     salary = 100000;
     cout<<"enter the id of the employee"<<endl;
     cin>>id;
 }
 void getid(void){
     cout<<"the id of the employee is "<<id<<endl;
 }
};
int main(){
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}