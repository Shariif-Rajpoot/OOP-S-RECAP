#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter the two numbers ";
    cin >> x >> y;
    int res = int(x) % int(y);
    cout << res << endl;
}