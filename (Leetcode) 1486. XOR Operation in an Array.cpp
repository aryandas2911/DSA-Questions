// Ques Link: https://leetcode.com/problems/xor-operation-in-an-array/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int nums[n];
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            nums[i] = start + 2 * i;
        }
        for (auto i : nums)
        {
            x ^= i;
        }
        return x;
    }
};

int main()
{
    Solution s;
    int n, start;
    cin >> n >> start;
    int k = s.xorOperation(n, start);
    cout << k;
    return 0;
}