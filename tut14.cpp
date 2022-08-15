#include<iostream>
using namespace std;
// struct classroom
//{
//    /* data */
//    int stdnum;
//    char alphabet;
//    float marks;
//};
//
//int main(){
//    struct classroom sanskar;
//    sanskar.stdnum = 1;
//    sanskar.alphabet = 's';
//    sanskar.marks = 99;
//    cout<<"the value is: "<<sanskar.stdnum<<endl;
//    cout<<"the value is: "<<sanskar.alphabet<<endl;
//    cout<<"the value is: "<<sanskar.marks<<endl;
 typedef struct classroom
{
    /* data */
    int stdnum;
    char alphabet;
    float marks;
} cr;

union money
{
    /* data */
    int rice;
    char car;
    float dollars;
};


int main(){
//    cr sanskar;
//    cr nux;
//    cr skar;
//    sanskar.stdnum = 1;
//    sanskar.alphabet = 's';
//    sanskar.marks = 99;
//    cout<<"the value is: "<<sanskar.stdnum<<endl;
//    cout<<"the value is: "<<sanskar.alphabet<<endl;
//    cout<<"the value is: "<<sanskar.marks<<endl;

 // UNIONS
 //   union money m1;
 //   m1.rice = 12;
 //   m1.car= 'c';
 //   cout<<m1.car<<endl;

 // ENUM
 enum Meal{breakfast,lunch,dinner}; // breakfast = 0 lunch =1 and dinner = 2
 Meal m1 = breakfast;
 cout<<m1;
    return 0;
}