#include <iostream>
using namespace std;
class base
{
    int a;

public:
    int b = 0;

protected:
    int c;
};
class drive : public base
{
};
int main()
{
    drive d;
    cout << d.b << endl;
    return 0;
}