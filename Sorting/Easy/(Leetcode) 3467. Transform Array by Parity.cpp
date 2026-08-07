// Ques Link: https://leetcode.com/problems/transform-array-by-parity/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[i] = 0;
            }
            else
            {
                nums[i] = 1;
            }
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main()
{
    vector<int> nums;
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.transformArray(nums);

    cout << "Transformed array: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}