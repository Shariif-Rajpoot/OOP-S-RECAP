#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
// class
class employee
{
    int id;
    string name;

public:
    void setData(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout << "The employee " << name << " has id " << id << endl;
    }
};
int main()
{
    employee *emp = new employee[4];
    int id;
    string name;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the id of the employee ";
        cin >> id;
        cout << "Enter the name of the employee ";
        cin >> name;
        emp[i].setData(id, name);
    }
    for (int i = 0; i < 4; i++)
    {
        emp[i].display();
    }
    return 0;
}