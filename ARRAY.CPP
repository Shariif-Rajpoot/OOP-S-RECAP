#include <iostream>
#define N 5
using namespace std;
int main()
{
    int *array = new int[N];
    cout << "Enter the marks of the students " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the marks of student " << i + 1;
        cout << endl;
        cin >> array[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << "\t";
    }
    int sum = 0, l = 0;
    int max = array[0];
    for (int i = 0; i < N; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        sum += array[i];
        l++;
    }
    cout << endl;
    float avg = sum / l;
    cout << "The sum is     ==> " << sum << endl;
    cout << "The average is ==> " << avg << endl;
    cout << "\n\t\tThe maximum number is ==> " << max << endl;
    cout << "The sorted data is " << endl;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << "\t";
    }
    return 0;
}