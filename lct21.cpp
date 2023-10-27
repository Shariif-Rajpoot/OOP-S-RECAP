#include <iostream>
using namespace std;
int main()
{
    int *array = new int[3];
    array[0] = 10;
    array[1] = 5;
    array[2] = 15;
    for (int i = 0; i < 3; i++)
        cout << *(array + i) << endl;
    int *a = new int(1);
    delete a;
    a = 0;
    cout << *a << endl;

    return 0;
}