#include <iostream>
using namespace std;
class complex; // forward declaration
class complexCalculator
{
public:
    int calculateRealPart(complex o1, complex o2);
    int calculateImagPart(complex o1, complex o2);
};
class complex
{
    int real, imag;
    friend int complexCalculator::calculateImagPart(complex, complex);
    friend int complexCalculator::calculateRealPart(complex, complex);

public:
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + " << imag << " i " << endl;
    }
};
int complexCalculator ::calculateImagPart(complex o1, complex o2)
{
    return (o1.imag + o2.imag);
}
int complexCalculator ::calculateRealPart(complex o1, complex o2)
{
    return (o1.real + o2.real);
}
int main()
{
    complex o1, o2;
    o1.setData(1, 2);
    o1.display();
    o2.setData(3, 4);
    o2.display();
    complexCalculator calc;
    int resR, resI;
    resR = calc.calculateRealPart(o1, o2);
    resI = calc.calculateImagPart(o1, o2);
    cout << resR << " + " << resI << " i " << endl;
    return 0;
}