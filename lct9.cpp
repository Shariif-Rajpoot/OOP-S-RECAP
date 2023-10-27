#include <iostream>
using namespace std;
// abstraction
class askForPromotion
{
    virtual void askforPromotion() = 0;
};
class employee : public askForPromotion
{
    // encapsulation
private:
    string name;
    string company;
    int salary;

public:
    employee() {}
    employee(string name, string company, int salary) : name(name), company(company), salary(salary)
    {
    }
    void getInformation()
    {
        cout << "Name   : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << "Company: " << company << endl;
    }
    virtual void work()
    {
        cout << name << " is checking emails, documents and maintain the data " << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setCompany(string company)
    {
        this->company = company;
    }
    string getCompany()
    {
        return company;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int setSalary()
    {
        return salary;
    }
    void askforPromotion()
    {
        if (salary >= 7000000)
        {
            cout << name << " is promoted, Congrats!" << endl;
        }
        else
        {
            cout << name << " is not promoted oop's try again next time" << endl;
        }
    }
};
// inheritance
class teacher : public employee
{
    string subject;

public:
    teacher() {}
    teacher(string name, string company, int salary, string subject) : employee(name, company, salary)
    {
        this->subject = subject;
    }
    void learning()
    {
        cout << getName() << " is learning the basic concepts of " << subject << endl;
    }
    void work()
    {
        cout << getName() << " is teaching the " << subject << endl;
    }
};
int main()
{
    // employee *emp[2];
    // teacher t1("Mohsin", "cool School", 30000, "Programming"), t2("Jawad", "Cool School", 30000, "Calculas");
    // emp[0] = &t1;
    // emp[1] = &t2;
    // emp[0]->setName("Anees");
    // for (int i = 0; i < 2; i++)
    // {
    //     emp[i]->getInformation();
    //     cout << endl
    //          << endl;
    //     emp[i]->work();
    // }
    return 0;
}