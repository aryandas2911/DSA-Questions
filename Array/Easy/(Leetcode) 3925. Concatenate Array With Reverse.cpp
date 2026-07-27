// Ques Link: https://leetcode.com/problems/concatenate-array-with-reverse/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> concatWithReverse(vector<int> &nums)
    {
        int n = nums.size();
        int k = 2 * n;
        vector<int> result(k);

        for (int i = 0; i < n; i++)
        {
            result[i] = nums[i];
            result[k - 1 - i] = nums[i];
        }

        return result;
    }
};

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.concatWithReverse(nums);

    cout << "Result: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}