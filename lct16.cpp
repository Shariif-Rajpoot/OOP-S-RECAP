#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
class simpleCalculator
{

protected:
    float add(float, float);
    float sub(float, float);
    float mul(float, float);
    float div(float, float);
    int mod(float, float);
};
float simpleCalculator ::add(float x, float y)
{
    return (x + y);
}
float simpleCalculator ::sub(float x, float y)
{
    return (x - y);
}
float simpleCalculator ::mul(float x, float y)
{
    return (x * y);
}
float simpleCalculator ::div(float x, float y)
{
    if (y == 0)
    {
        return 0;
    }
    else
    {
        return (x / y);
    }
}
int simpleCalculator ::mod(float x, float y)
{
    if (y == 0)
    {
        return 0;
    }
    else
    {
        return (int(x) % int(y));
    }
}
// second class
class scientificCalculator
{
protected:
    int power(int, int);
    float underRoot(float);
    float square(float);
    int factorial(int);
};
int scientificCalculator::power(int p, int n)
{
    int res = 1;
    for (int i = 1; i <= p; i++)
    {
        res *= n;
    }
    return res;
}
float scientificCalculator ::underRoot(float num)
{
    return (sqrt(num));
}
float scientificCalculator::square(float n)
{
    return (n * n);
}
int scientificCalculator ::factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}
// third class
class hybridCalculator : public scientificCalculator, public simpleCalculator
{
    void operation(char);
    void menu();

public:
    void letMeIn()
    {
        menu();
    }
};
void hybridCalculator::menu()
{
    char choice;
    cout << endl
         << endl;
    cout << "\t\t\tEnter + for addition " << endl;
    cout << "\tEnter - for subtraction " << endl;
    cout << "\tEnter * for multiplication " << endl;
    cout << "\t\t\tEnter / for division " << endl;
    cout << "\tEnter % for modulas " << endl;
    cout << "\t\t\tEnter ^ for finding power " << endl;
    cout << "\tEnter ! for finding the factorial " << endl;
    cout << "\t\t\tEnter the S or s to find square " << endl;
    cout << "\tEnter the R or r to find under root " << endl;
    cout << "\n\n\t\t\tEnter your choice ==> ";
    cin >> choice;
    cout << endl
         << endl;
    // operations
    operation(choice);
}
void hybridCalculator::operation(char choice)
{
    int x, y;
    switch (choice)
    {
    case '+':
    {
        cout << "\t\tEnter two numbers " << endl;
        cin >> x >> y;
        float res;
        res = add(x, y);
        cout << "The addition of " << x << " and " << y << " is " << res << endl;
        break;
    }
    case '-':
    {
        cout << "\t\tEnter two numbers " << endl;
        cin >> x >> y;
        float res;
        res = sub(x, y);
        cout << "The subtraction of " << x << " and " << y << " is " << res << endl;
        break;
    }
    case '*':
    {
        cout << "\t\tEnter two numbers " << endl;
        cin >> x >> y;
        float res;
        res = mul(x, y);
        cout << "The multiplication of " << x << " and " << y << " is " << res << endl;
        break;
    }
    case '/':
    {
        cout << "\t\tEnter two numbers " << endl;
        cin >> x >> y;
        float res;
        res = div(x, y);
        cout << "The division of " << x << " and " << y << " is " << res << endl;
        break;
    }
    case '%':
    {
        cout << "\t\tEnter two numbers " << endl;
        cin >> x >> y;
        float res;
        res = mod(x, y);
        cout << "The modulas of " << x << " and " << y << " is " << res << endl;
        break;
    }
    case '^':
    {
        cout << "\t\tEnter two numbers " << endl;
        cin >> x >> y;
        float res;
        res = power(x, y);
        cout << "The result after raising " << x << " to the power of " << y << " is " << res << endl;
        break;
    }
    case '!':
    {
        cout << "\t\tEnter number " << endl;
        cin >> x;
        int res;
        res = factorial(x);
        cout << "\t\tThe factorial of the number " << x << " is " << res << endl;
        break;
    }
    case 'S':
    case 's':
    {
        cout << "\t\tEnter the number ";
        cin >> x;
        float res;
        res = square(x);
        cout << "\t\tThe square of the number " << x << " is " << res << endl;
        break;
    }
    case 'R':
    case 'r':
    {
        cout << "\t\tEnter the number ";
        cin >> x;
        float res;
        res = underRoot(x);
        cout << "\t\tThe under root of the number " << x << " is " << res << endl;
        break;
    }
    default:
    {
        cout << "\t\tINVALID CHOICE " << endl;
    }
    }
    int ch;
    cout << "\t\t\tTo continue press 1 else for exit " << endl;
    cin >> ch;
    if (ch == 1)
    {
        menu();
    }
    else
    {
        cout << endl
             << endl;
        cout << "\t\tTHANK'S !!!!" << endl;
        exit(0);
    }
}
int main()
{
    hybridCalculator calc;
    calc.letMeIn();
    return 0;
}