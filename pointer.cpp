#include <iostream>
using namespace std;
int main()
{
    int x;
    int *ptr;
    ptr = &x;
    x = 10;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 9;
    cout << *ptr << endl;
    cout << x << endl;
    cout << *&*ptr << endl;
    cout << **&*&ptr << endl;
    cout << **&ptr << endl;
    // cout << &&*ptr << endl;

    return 0;
}