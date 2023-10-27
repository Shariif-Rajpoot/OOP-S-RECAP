/*
    WRITE PROGRAM TO FIND THE ELEMENT IN AN ARRAY.
*/
#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter the numbers " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number to find ";
    int n;
    cin >> n;
    int first = 0;
    int last = 4, mid = 0;
    do
    {
        mid = (first + last) / 2;
        if (a[mid] == n)
        {
            cout << "Number find at index " << mid << " this number is " << a[mid] << endl;
            break;
        }
        else if (a[mid] > n)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    } while (first <= last);
    if (first > last)
    {
        cout << "The number not find" << endl;
    }
    return 0;
}