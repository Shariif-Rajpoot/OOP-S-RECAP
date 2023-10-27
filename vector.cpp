#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <class t>
void display(vector<t> &vect)
{
    for (int i = 0; i < vect.size(); i++)
        cout << vect.at(i) << "\t";
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, choice;
    do
    {
        cout << "Enter the number ";
        cin >> element;
        vec1.push_back(element);
        cout << "To continue Press 1 ";
        cin >> choice;
    } while (choice == 1);
    // vec1.pop_back();
    display(vec1);
    cout << endl
         << endl;
    vector<int>::iterator it;
    it = vec1.begin();
    vec1.insert(it, 0);
    display(vec1);
    cout << endl
         << endl;
    vec1.erase(it + 1);
    display(vec1);
    return 0;
}