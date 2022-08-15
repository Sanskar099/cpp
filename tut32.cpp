// Default arguments of the constructor are those which are provided in the constructor declaration. 
//If the values are not provided when calling the constructor the constructor uses the default arguments automatically
#include<iostream>
using namespace std;
class Data{
    int data1, data2, data3;
    public:
    Data(int a, int b=9, int c = 8){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printnumber(void){
     cout<<"the number is: "<<data1<<" "<<data2<<" "<<data3<<endl;
 }
};
int main(){
 Data c1(2,4,3);
 c1.printnumber();
 Data c2(2);
 c2.printnumber();
 Data c3(2,4);
 c3.printnumber();    
    return 0;
}