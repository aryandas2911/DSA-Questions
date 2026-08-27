// Ques Link: https://leetcode.com/problems/find-the-degree-of-each-vertex/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDegrees(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        for (auto i : matrix)
        {
            int sum = 0;
            for (auto j : i)
            {
                sum += j;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 0, 1},
        {1, 1, 0},
        {0, 1, 1}};

    Solution obj;
    vector<int> ans = obj.findDegrees(matrix);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}