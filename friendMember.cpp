#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int addRealPart(Complex, Complex);
    int addImagPart(Complex, Complex);
};
class Complex
{
    int real;
    int imag;
    friend int Calculator::addRealPart(Complex, Complex);
    friend int Calculator::addImagPart(Complex, Complex);

public:
    Complex();
    Complex(int, int);
    void display();
};
Complex::Complex() {}
Complex::Complex(int real, int imag) : real(real), imag(imag) {}
void Complex::display()
{
    cout << real << " + " << imag << "i" << endl;
}

int Calculator::addRealPart(Complex o1, Complex o2)
{
    return (o1.real + o2.real);
}
int Calculator::addImagPart(Complex o1, Complex o2)
{
    return (o1.imag + o2.imag);
}
int main()
{
    Complex obj1, obj2;
    obj1 = Complex(1, 2);
    obj2 = Complex(2, 3);
    obj1.display();
    obj2.display();
    Calculator calc;
    int resR = calc.addRealPart(obj1, obj2);
    int resI = calc.addImagPart(obj1, obj2);
    Complex obj3;
    obj3 = Complex(resR, resI);
    obj3.display();
    return 0;
}