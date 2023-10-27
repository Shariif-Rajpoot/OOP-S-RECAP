#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
class complex
{
    int real, imag;

public:
    void getInput(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend ostream &operator<<(ostream &, complex &);
    friend complex operator+(complex, complex);
};

complex operator+(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
ostream &operator<<(ostream &Cout, complex &c1)
{
    Cout << c1.real << " + " << c1.imag;
    return Cout;
}
int main()
{
    complex num1, num2, sum;
    num1.getInput(1, 2);
    cout << num1 << endl;
    num2.getInput(3, 4);
    cout << num2 << endl;
    sum = num1 + num2;
    cout << sum << endl;
    return 0;
}