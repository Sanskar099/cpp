#include <iostream> //MULTILEVEL INHERITANCE
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number(void)
{
    cout << "the roll number is: " << roll_number << endl;
}
class Marks : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Marks ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
    void Marks ::get_marks(void)
    {
        cout << "maths marks: " << maths << endl;
        cout << "physics marks: " << physics << endl;
    }
    class Result : public Marks
    {
    public:
        void display_result(void);
    };
    void Result ::display_result(void){
            cout << "the percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
int main()
{
    Result r1;
    r1.set_marks(96.0, 97.0);
    r1.display_result();
    return 0;
}