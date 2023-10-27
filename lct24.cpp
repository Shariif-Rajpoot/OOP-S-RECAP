#include <iostream>
using namespace std;
class employee
{
    string name;
    int age;

public:
    employee &setData(string name, int age)
    {
        this->name = name;
        this->age = age;
        return *(this);
    }
    void display()
    {
        cout << "The employee " << name << " is of age " << age << endl;
    }
};
int main()
{
    employee e;
    e.setData("Mohsin", 21).display();
    return 0;
}