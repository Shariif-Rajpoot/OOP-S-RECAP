#include <iostream>
using namespace std;
class content
{
    int num1;
    int num2;

public:
    void setData(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void display()
    {
        cout << "The value of X is " << num1 << endl;
        cout << "The value of Y is " << num2 << endl;
    }
    friend class takeOperation;
};
class takeOperation
{
public:
    void swap(content &c1)
    {
        cout << endl;
        cout << "After swapping " << endl;
        c1.num1 = c1.num1 + c1.num2;
        c1.num2 = c1.num1 - c1.num2;
        c1.num1 = c1.num1 - c1.num2;
    }
};
int main()
{
    content c1;
    c1.setData(4, 5);
    c1.display();
    takeOperation o1;
    o1.swap(c1);
    c1.display();
    return 0;
}