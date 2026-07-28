// Ques Link: https://leetcode.com/problems/sort-array-by-parity/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = n - 1;

        while (i < j)
        {
            if (nums[i] % 2 == 0)
            {
                i++;
            }
            else if (nums[j] % 2 != 0)
            {
                j--;
            }
            else
            {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return nums;
    }
};

int main()
{
    vector<int> nums = {3, 1, 2, 4};

    Solution obj;
    vector<int> result = obj.sortArrayByParity(nums);

    cout << "Sorted by Parity: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}