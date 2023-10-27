#include <iostream>
#include <string>
using namespace std;
class complex
{
    int real, imag;

public:
    complex(int r)
    {
        real = r;
        imag = 0;
    }
    complex(int r = 0, int i = 0) : real(r), imag(i) {}
    void printNumber()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    void addition(complex);
    void subtraction(complex);
    void multiplication(complex);
};
int main()
{
    complex c1, c2, c3, c4;
    c1.printNumber();
    c2 = complex(1, 2);
    c2.printNumber();
    c3 = complex(3, 1);
    c3.printNumber();
    c4 = complex(4, 3);
    c4.printNumber();
    int choice;
label:
    cout << "Enter 1 for multiplication " << endl;
    cout << "Enter 2 for subtraction " << endl;
    cout << "Enter 3 for addition " << endl;
    cout << "Enter 4 for exit " << endl;
    cout << "Enter your choice ==> ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        c2.multiplication(c3);
        break;
    case 2:
        c2.subtraction(c3);
        break;
    case 3:
        c3.addition(c1);
        break;
    case 4:
        exit(0);
    default:
        cout << "Invalid Input" << endl;
    }
    goto label;
    return 0;
}
void complex ::addition(complex c1)
{
    cout << "The addition is " << endl;
    int sumR = real + c1.real;
    int sumI = imag + c1.imag;
    cout << sumR << " + " << sumI << "i" << endl;
}
void complex ::subtraction(complex c1)
{
    cout << "The subtraction is " << endl;
    int subR = real - c1.real;
    int subI = imag - c1.imag;
    cout << subR << " - " << subI << "i" << endl;
}
void complex ::multiplication(complex c1)
{
    cout << "The multiplication is " << endl;
    int multiR = real * c1.real;
    int multiI = imag * c1.imag;
    cout << multiR << " * " << multiI << "i" << endl;
}
// Note:
/*
    cout<<"WHEN WE USE CONSTRUCTOR WITH THE DEFAULT
    ARGUMENTS THEN WE
    DON'T HAVE ANE NEED OF THE DEFAULT CONSTRUCTOR"<<endl;
*/