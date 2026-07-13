// Ques Link: https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0, col = n - 1;

        while (row < m && col >= 0)
        {
            if (matrix[row][col] == target)
            {
                return true;
            }
            else if (matrix[row][col] < target)
            {
                row++;
            }
            else
            {
                col--;
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int target = 9;

    Solution obj;
    if (obj.searchMatrix(matrix, target))
        cout << "Target found\n";
    else
        cout << "Target not found\n";

    return 0;
}