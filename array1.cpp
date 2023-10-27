#include <iostream>
using namespace std;
int main()
{
    int a[10];
    cout << "Enter the values " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    int i = 0;
    for (int j = 1; j < 10; j++)
    {
        if (a[i] != a[j])
        {
            i++;
        }
        a[i] = a[j];
    }
    cout << endl
         << endl;
    for (int k = 0; k < (i + 1); k++)
    {
        cout << a[k] << "\t";
    }
    return 0;
}