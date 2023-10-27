#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *name = new char[30];
    cin >> name;
    cout << "Original Name " << name << endl;
    string n = name;
    cout << n << endl;
    return 0;
}