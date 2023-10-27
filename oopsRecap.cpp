/*
    In this tutorial we are going to see
    how abstraction and encapsulation works
*/
#include <iostream>
using namespace std;
class askforPromotion
{
    virtual void whataboutPromotion() = 0;
};
class Employee : public askforPromotion
{
private:
    string name;
    int salary;
    string company;
    int years;

public:
    void setName(string n)
    {
        name = n;
    }
    void setSalary(int s)
    {
        salary = s;
    }
    void setCompany(string c)
    {
        company = c;
    }
    void setYears(int y)
    {
        years = y;
    }
    string getName()
    {
        return name;
    }
    int getSalary()
    {
        return salary;
    }
    string getCompany()
    {
        return company;
    }
    int getWorkTime()
    {
        return years;
    }
    void whataboutPromotion()
    {
        if (years >= 20)
        {
            cout << getName() << " is promoted " << endl;
        }
        else
        {
            cout << getName() << " sorry!, you are not promoted ";
        }
    }
};
void show(Employee e1)
{
    cout << " An empoyee " << e1.getName() << " With salary " << e1.getSalary()
         << " is working with the experience of " << e1.getWorkTime()
         << "in " << e1.getCompany() << " compnay " << endl;
}
int main()
{
    Employee e1;
    e1.setName("Mohsin");
    e1.setSalary(15000);
    e1.setCompany("apnaCoder");
    e1.setYears(19);
    show(e1);
    e1.whataboutPromotion();
    return 0;
}
