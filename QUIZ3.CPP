#include <iostream>
using namespace std;
int first = 1, second = 1;
void fibo(int n)
{
    if (n)
    {
        int next;
        cout << first << "\t";
        next = first + second;
        first = second;
        second = next;
        fibo(n - 1);
    }
    else
    {
        return;
    }
}
int main()
{
    int n;
    cout << "Enter the term for print fibonacci series " << endl;
    cin >> n;
    int first = 1, second = 1, next;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << first << "\t";
    //     next = first + second;
    //     first = second;
    //     second = next;
    // }
    fibo(n);
    return 0;
}