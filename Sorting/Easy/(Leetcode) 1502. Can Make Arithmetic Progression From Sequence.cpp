// Ques Link: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];

        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] - arr[i] != diff)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {3, 5, 1};

    if (sol.canMakeArithmeticProgression(arr))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}