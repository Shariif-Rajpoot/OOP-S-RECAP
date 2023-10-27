#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void input(int r, int i);
    void display();
};
void complex ::input(int r, int i)
{
    real = r;
    imag = i;
}
void complex ::display()
{
    cout << real << " + " << imag << "i" << endl;
}
int main()
{
    complex c1, *ptr;
    ptr = &c1;
    (*ptr).input(1, 2);
    (*ptr).display();
    complex c2, *ptr2;
    ptr2 = &c2;
    ptr2->input(1, 2);
    ptr2->display();
    return 0;
}