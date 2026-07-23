// Ques Link: https://leetcode.com/problems/minimum-absolute-difference/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());

        int min_diff = INT_MAX;
        int n = arr.size();

        for (int i = 0; i < n - 1; i++)
        {
            min_diff = min(min_diff, arr[i + 1] - arr[i]);
        }

        vector<vector<int>> result;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] == min_diff)
            {
                result.push_back({arr[i], arr[i + 1]});
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {4, 2, 1, 3};

    vector<vector<int>> ans = sol.minimumAbsDifference(arr);

    cout << "Output:\n";
    for (const auto &pair : ans)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;

    return 0;
}