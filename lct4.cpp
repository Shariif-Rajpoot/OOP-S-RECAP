#include <iostream>
using namespace std;
class instrument
{
public:
    virtual void makeSound() = 0;
};
class accordian : public instrument
{
public:
    void makeSound()
    {
        cout << "Accordian playing " << endl;
    }
};
class piano : public instrument
{
public:
    void makeSound()
    {
        cout << "Piano playing " << endl;
    }
};

int main()
{
    instrument *it1 = new accordian;
    instrument *it2 = new piano;
    instrument *its[] = {it1, it2};
    for (int i = 0; i < 2; i++)
    {
        its[i]->makeSound();
    }
    return 0;
}