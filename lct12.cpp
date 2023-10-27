#include <iostream>  //header file is added
using namespace std; // std use for cout and cin
class employee
{
    int id;
    string name;

public:
    employee() {}
    employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout << "The id ==> " << id << endl;
        cout << "Name ==> " << name << endl;
    }
    string &getName()
    {
        return name;
    }
    int &getId()
    {
        return id;
    }
};
// point to be noted ==> by default inheritance is private
class programmer : employee
{
    int languageCode;

public:
    programmer() {}
    programmer(int id, string name, int lc)
    {
        this->getId() = id;
        this->getName() = name;
        this->languageCode = lc;
    }
    void display()
    {
        employee ::display();
        cout << "The language code is " << languageCode << endl;
    }
    int &getLC()
    {
        return languageCode;
    }
};
int main()
{
    employee e1;
    e1 = employee(1, "Mohsin");
    e1.display();
    cout << endl
         << endl;
    programmer p1(20, "Jawad", 10);
    p1.display();
    return 0;
}