// Ques Link: https://leetcode.com/problems/first-unique-even-element/description/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    int firstUniqueEven(vector<int> &nums)
    {
        map<int, int> even;

        for (auto i : nums)
        {
            if (i % 2 == 0)
            {
                even[i]++;
            }
        }

        for (auto i : nums)
        {
            if (i % 2 == 0 && even[i] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {3, 4, 2, 5, 4, 6};

    cout << solution.firstUniqueEven(nums) << endl;

    return 0;
}