#include <iostream>
using namespace std;
int main()
{
    int a[] = {6, 2, 3, 4, 5};
    int *ptr;
    ptr = a;
    cout << a << endl;
    cout << ptr << endl;
    // cout<<*a<<endl;
    cout << *a + 1 << endl;
    cout << *(a + 1) << endl;
    cout << sizeof(a) << endl;
    for (int i = 0; i < sizeof(a) / 4; i++)
    {
        cout << "Enter the value " << endl;
        cin >> i[ptr];
    }
    cout << "You entered " << endl;
    for (int i = 0; i < sizeof(a) / 4; i++)
    {
        cout << i[a] << endl;
    }
    return 0;
}