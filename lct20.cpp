#include <iostream>
using namespace std;
class humanName
{
protected:
    string name;

public:
    humanName() {}
    humanName(string name) : name(name) {}
    void display()
    {
        cout << "Name ==> " << name << endl;
    }
};
class humanAge
{
protected:
    int age;

public:
    humanAge() {}
    humanAge(int age) : age(age) {}
    void display()
    {
        cout << "Age ==> " << age << endl;
    }
};
class human : public humanName, public humanAge
{
public:
    human() {}
    human(string name, int age) : humanName(name), humanAge(age) {}
    void display()
    {
        humanName::display();
        humanAge::display();
    }
};
int main()
{
    human h1;
    h1 = human("Mohsin", 20);
    h1.display();
    return 0;
}