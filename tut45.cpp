#include <iostream> // VIRTUAL BASE CLASS THINGIE:
using namespace std;
class Student
{
    protected:
    int roll_num;
    public:
    void set_num(int num){
        roll_num = num;
    }
    void disp_num(){
        cout<<"your number is: "<<roll_num<<endl;
    }
};
class Test : public virtual Student
{
    protected:
    float maths, physics;
    public:
    void set_marks(float m, float p){
        maths = m;
        physics = p;
    }
    void disp_marks(void){
        cout<<"your total test marks are"<<maths + physics<<endl;
    }
};
class Sports : virtual public  Student
{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void disp_score(void){
        cout<<"your score in sports is : "<<score<<endl;
    }
};
class Results : public Test, public Sports
{
    float total;
    public:
    void display_res(){
        total = maths + physics + score;
        void disp_num();
        void disp_marks();
        void disp_score();
        cout<<"Your total is : "<<total<<endl;
    }
};
int main()
{
Results r1;
r1.set_num(9);
r1.set_marks(99,96);
r1.set_score(78);
r1.display_res();
    return 0;
}