// void pointers
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;
void print(void *, char);
int main()
{
    int x = 20;
    float y = 20.55f;
    char c = 'm';
    bool t = true;
    print(&x, 'i');
    print(&t, 'b');
    print(&y, 'f');
    print(&c, 'c');
    return 0;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((int *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    case 'f':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((float *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    case 'b':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((bool *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    case 'c':
        cout << "The address is " << ptr << endl;
        cout << "The value is " << *((char *)ptr) << endl;
        cout << "The address is " << ((int *)ptr) << endl;
        break;
    }
}