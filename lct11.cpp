#include <iostream>
using namespace std;
class test
{
    int a, b, c;

public:
    test() {}
    test(int a) : a(a), b(0), c(0) {}
    test(int a, int b) : a(a), b(b), c(0) {}
    test(int a, int b, int c) : a(a), b(b), c(c) {}
    test(test &t) : a(t.a), b(t.b), c(t.c) { cout << "\n\t\tCopy Constructor Called!!!!\n\n"; }
    void show()
    {
        cout << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << endl;
    }
};
int main()
{
    test x, y, z;
    x = test(1);
    x.show();
    y = x;
    y.show();
    z = test(1, 2, 3);
    z.show();
    test copy(z);
    copy.show();
    y = test(4, 5);
    y.show();
    test c = y;
    c.show();
    return 0;
}