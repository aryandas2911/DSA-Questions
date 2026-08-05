// Ques Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int count = 0;
        for (auto i : nums)
        {
            if (i % 3 != 0)
            {
                if (i % 3 == 1)
                {
                    count++;
                }
                else
                {
                    count += 3 - (i % 3);
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5, 6};

    cout << "Minimum Operations: " << sol.minimumOperations(nums) << endl;

    return 0;
}