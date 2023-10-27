#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    void setRollNo(int);
    void getRollNo();
};
void student ::setRollNo(int r)
{
    rollNo = r;
}
void student ::getRollNo()
{
    cout << "Roll Number => " << rollNo << endl;
}
class marks : public student
{
protected:
    float physics;
    float math;

public:
    void setMarks(float, float);
    void getMarks();
};
void marks ::setMarks(float m1, float m2)
{
    physics = m1;
    math = m2;
}
void marks ::getMarks()
{
    cout << "Marks ==> " << endl;
    cout << "Physics ==> " << physics << endl;
    cout << "Math ==> " << math << endl;
}
class result : public marks
{
    float per;

public:
    void displayResult()
    {
        getRollNo();
        getMarks();
        cout << "The total marks you obtain is " << (physics + math) << endl;
        cout << "Out of 200 " << endl;
        per = (math + physics) * 100 / 200;
        cout << "The percentage is " << per << "%" << endl;
    }
};
int main()
{
    result mohsin;
    mohsin.setRollNo(1);
    mohsin.setMarks(98, 92);
    mohsin.displayResult();
    return 0;
}