// Ques Link: https://leetcode.com/problems/pascals-triangle/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++)
        {
            vector<int> currentRow;
            long long val = 1;

            currentRow.push_back(1);

            for (int col = 1; col < i; col++)
            {
                val = val * (i - col) / col;
                currentRow.push_back(val);
            }

            ans.push_back(currentRow);
        }

        return ans;
    }
};

int main()
{
    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution sol;
    vector<vector<int>> result = sol.generate(numRows);

    cout << "\nPascal Triangle:\n";

    for (const auto &row : result)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}