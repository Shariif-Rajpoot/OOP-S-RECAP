#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void inputRollNO(int r)
    {
        roll_no = r;
    }
    void displayRollNo()
    {
        cout << "Roll Number => " << roll_no << endl;
    }
};
class marks : virtual public student
{
protected:
    float physics;
    float maths;

public:
    void set_marks(float m1, float m2)
    {
        physics = m1;
        maths = m2;
    }
    void display_marks()
    {
        cout << "Your score marks are => " << endl
             << "Physics => " << physics << endl
             << "Maths   => " << maths << endl;
    }
};
class sport : virtual public student
{
protected:
    int score;

public:
    void input_score(int s)
    {
        score = s;
    }
    void display_score()
    {
        cout << "Score => " << score << endl;
    }
};
class result : public marks, public sport
{
private:
    int res;

public:
    void display_result()
    {
        res = maths + physics + score;
        displayRollNo();
        display_marks();
        display_score();
        cout << "Your total marks ==> " << res << endl;
    }
};
/*Driver function*/
int main()
{
    result mohsin;
    mohsin.inputRollNO(22);
    mohsin.set_marks(99, 99);
    mohsin.input_score(5);
    mohsin.display_result();
    return 0;
}