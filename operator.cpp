#include <iostream>
using namespace std;
class point
{
    int x;
    int y;

public:
    point() {}
    point(int x, int y) : x(x), y(y) {}
    point operator+(point p)
    {
        point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }
    point operator-(point p)
    {
        point temp;
        temp.x = x - p.x;
        temp.y = y - p.y;
        return temp;
    }
    point operator*(point p)
    {
        point temp;
        temp.x = x * p.x;
        temp.y = y * p.y;
        return temp;
    }
    point operator/(point p)
    {
        point temp;
        if (p.x == 0)
        {
            temp.x = 0;
        }
        else
        {
            temp.x = x / p.x;
        }
        if (p.y == 0)
        {
            temp.y = 0;
        }
        else
        {
            temp.y = y / p.y;
        }
        return temp;
    }
    void print();
};
void point ::print()
{
    cout << "X: " << x << "\t"
         << "Y: " << y << endl;
}
int main()
{
    point p1, p2;
    p1 = point(1, 2);
    p2 = point(2, 1);
    p1.print();
    p2.print();
    cout << "The sum is " << endl;
    point p3;
    p3 = p1 + p2;
    p3.print();
    cout << "The subtraction is " << endl;
    point p4;
    p4 = p3 - p1;
    p4.print();
    cout << "The multiplication is " << endl;
    point p5;
    p5 = p4 * p3;
    p5.print();
    cout << "The division is " << endl;
    point p6;
    p6 = p5 / p4;
    p6.print();
    // a = 10;
    // int *ptr;
    // ptr = &a;
    // cout << a << endl;
    // cout << ptr << endl;
    // cout << &a << endl;
    // cout << *ptr << endl;
    // cout << *(*&ptr) << endl;
    // cout << *(&*ptr) << endl;
    return 0;
}