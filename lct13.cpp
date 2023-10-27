#include <iostream>
using namespace std;
class base
{
    int x, y;

public:
    void input();
    int getfirstVal();
    int getsecondVal();
};
void base ::input()
{
    cout << "Enter the first value ==> ";
    cin >> x;
    cout << "Enter the second value ==> ";
    cin >> y;
}
int base ::getfirstVal()
{
    return x;
}
int base ::getsecondVal()
{
    return y;
}
class derive : public base
{
    int result;

public:
    void process();
    void display();
};
void derive ::process()
{
    result = getfirstVal() * getsecondVal();
}
void derive ::display()
{
    cout << "X ==> " << getfirstVal() << endl;
    cout << "Y ==> " << getsecondVal() << endl;
    cout << "Result ==> " << result << endl;
}
int main()
{
    derive d1;
    d1.input();
    d1.process();
    d1.display();
    return 90;
}