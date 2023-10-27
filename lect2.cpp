#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + " << imag << " i" << endl;
    }
    complex operator+(complex c);
};
complex complex ::operator+(complex c)
{
    complex res;
    res.real = real + c.real;
    res.imag = imag + c.imag;
    return res;
}
int main()
{
    complex c1, c2, c3, c4;
    c1.setData(1, 2);
    c1.display();
    c2.setData(3, 4);
    c2.display();
    // c3 = c1 + c2;
    c3.setData(5, 6);
    c4 = c1 + c2 + c3;
    c4.display();
    return 0;
}