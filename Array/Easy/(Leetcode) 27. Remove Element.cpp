// Ques Link: https://leetcode.com/problems/remove-element/description

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (auto i : nums)
        {
            if (i != val)
            {
                nums[k] = i;
                k++;
            }
        }
        return k;
    }
};

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution obj;
    int k = obj.removeElement(nums, val);

    cout << "k = " << k << endl;
    cout << "Modified array: ";

    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}