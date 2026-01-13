// Ques Link: https://leetcode.com/problems/pascals-triangle/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> rows;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row;
            if (i <= 1)
            {
                for (int j = 0; j <= i; j++)
                {
                    row.push_back(1);
                }
            }
            else
            {
                row.push_back(1);
                for (int j = 1; j < i; j++)
                {
                    row.push_back(rows[i - 1][j - 1] + rows[i - 1][j]);
                }
                row.push_back(1);
            }
            rows.push_back(row);
        }
        return rows;
    }
};

int main()
{
    Solution sol;
    int numRows = 5;
    vector<vector<int>> result = sol.generate(numRows);
    for (int i = 0; i < result.size(); i++)
    {
        for (int s = 0; s < numRows - i; s++)
            cout << " ";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}