#include<iostream>
using namespace std;

int volume(float r, int h)
{
    return(3.14*r*r*h);
}
int volume(int l, int b, int h){
    return(l*b*h);
}
int main(){
    cout<<"the volume of cylinder of radius 3 and height 4 is: "<<volume(3,4)<<endl;
    cout<<"the volume of cuboid of length 3, breadth 4 and height 5 is: : "<<volume(3,4,6)<<endl;
    return 0;
}