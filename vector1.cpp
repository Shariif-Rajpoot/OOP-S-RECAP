#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int element)
    {
        int k = 0;
        int array[nums.size()];
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != element)
            {
                array[j] = nums[i];
                j++;
            }
            else
            {
                k++;
            }
        }
        cout << "After removing the element " << endl;
        for (int i = 0; i < j; i++)
        {
            cout << array[i] << "\t" << endl;
        }
        return k;
    }
};
int main()
{
    vector<int> a;
    int n;
    int choice = 1;
    do
    {
        /* code */
        cout << "Enter the number ";
        cin >> n;
        a.push_back(n);
        cout << "To stop press 0 " << endl;
        cin >> choice;
    } while (choice);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
    cout << "Enter the element to remove " << endl;
    cin >> n;
    Solution s;
    int k = s.removeElement(a, n);
    cout << endl
         << endl;
    cout << k << endl;
    return 0;
}