#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int returnSearchIndex(vector<int> &nums, int target)
    {
        int first = 0;
        int last = nums.size() - 1;
        int mid;
        while (first <= last)
        {
            mid = first + (last - first) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                last = mid - 1;
            else
                first = mid + 1;
        }
        return first;
    }
};
int main()
{
    vector<int> a;
    int n, c, t;
    do
    {
        /* code */
        cout << "Enter the number ";
        cin >> n;
        a.push_back(n);
        cout << "To continue press 1";
        cin >> c;
    } while (c == 1);
    cout << endl
         << endl;
    cout << "You data =>\t";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << "\t";
    }
    cout << endl
         << endl;
    cout << "Enter the number to search ";
    cin >> t;
    Solution s;
    int index = s.returnSearchIndex(a, t);
    cout << endl;
    cout << "Index is " << index << endl;
    return 0;
}