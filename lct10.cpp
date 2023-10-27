#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int year;
    float interestRate;
    int returnValue;

public:
    bankDeposit() {}
    bankDeposit(int, int, float);
    bankDeposit(int, int, int);
    void show();
};
bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 1; i <= year; i++)
    {
        returnValue *= 1 + interestRate;
    }
}
bankDeposit ::bankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 1; i <= year; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
void bankDeposit::show()
{
    cout << "Amount   ==> " << principal << endl;
    cout << "Years    ==> " << year << endl;
    cout << "Interest ==> " << interestRate << endl;
    cout << "Now the amount for you to receive is " << returnValue << endl;
}
int main()
{
    bankDeposit bd1, bd2;
    int p, y, r;
    float R;
    cout << "Enter the amount ";
    cin >> p;
    cout << "Enter the year/years ";
    cin >> y;
    cout << "Enter the interestRate in percentage ";
    cin >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the amount ";
    cin >> p;
    cout << "Enter the year/years ";
    cin >> y;
    cout << "Enter the interestRate ";
    cin >> R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();
    return 0;
}