#include <iostream>
#define N 5
using namespace std;
int main()
{
    // int a[] = {1, 2, 3, 4, 5};
    // int *p;
    // p = a;
    // *(int *)p;
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << (p + i) << " address has value " << *(i + p) << endl;
    // }
    // // p = &a;//error
    // cout << endl
    //      << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "The value " << i[p] << " has address ";
    //     cout << (&(*(&p[i]))) << endl;
    // }
    // cout << *(p + 1) << endl;
    // cout << *(a + 1) << endl;
    // cout << *p + 1 << endl;
    // cout << *a + 1 << endl;
    // cout << 1 [p] << endl;
    // cout << "Addresses " << endl;
    // cout << &a << endl;
    // cout << a << endl;
    // cout << &a + 1 << endl;
    // cout << a + 1 << endl;
    // cout << "values " << endl
    //      << endl;
    // // p = &a;
    // cout << *(&a) << endl;
    // cout << *(a) << endl;
    // cout << *(&a + 1) << endl;
    // cout << *(a + 1) << endl;
    int array[N];
    int *ptr;
    ptr = array;
    cout << "Enter the " << N << " values " << endl;
    for (int i = 0; i < N; i++)
    {
        // cin>>*(i+array);
        // cin>>array[i];
        // cin>>ptr[i];
        cin >> *(ptr + i);
    }
    for (int i = 0; i < N; i++)
    {
        cout << *(ptr + i) << endl;
    }
    return 0;
}