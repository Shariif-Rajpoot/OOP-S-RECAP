/*
PROGRAM TO CALCULATE FACTORIAL AND POWER OF THE NUMBERS ENTER BY THE USER
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
class solution
{
    int num1, num2, power;

public:
    void getDataForPower(int num, int power)
    {
        this->num1 = num;
        this->power = power;
    }
    void getDataForFact(int num)
    {
        this->num2 = num;
    }
    void calculateFactorial();
    void calculatePower();
};
void solution ::calculateFactorial()
{
    int fact = 1;
    for (int i = num2; i > 0; i--)
    {
        fact *= i;
    }
    cout << "The factorial of " << num2 << " is " << fact << endl;
}
void solution ::calculatePower()
{
    int res = 1;
    for (int i = 1; i <= power; i++)
    {
        res *= num1;
    }
    cout << "The number " << num1 << " with power " << power << " has result " << res << endl;
}
int main()
{
    solution s1;
    s1.getDataForPower(3, 2);
    s1.getDataForFact(4);
    s1.calculateFactorial();
    s1.calculatePower();
    return 0;
}