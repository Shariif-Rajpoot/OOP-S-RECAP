/*
    WRITE PROGRAM TO CONVERT DECIMAL INTO BINARY
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
class Binary
{
    int deci;
    int bin = 0;

public:
    void input(int d)
    {
        deci = d;
    }
    void convertor();
    void display()
    {
        cout << "The binary of the " << deci << "  is " << bin << endl;
    }
};
void Binary ::convertor()
{
    int copy = deci, rem;
    for (int i = 1; copy;)
    {
        rem = copy % 2;
        bin = bin + rem * i;
        i *= 10;
        copy /= 2;
    }
}
int main()
{
    Binary b1;
    int n;
    cout << "Enter the Decimal number ";
    cin >> n;
    b1.input(n);
    b1.convertor();
    b1.display();
    return 0;
}