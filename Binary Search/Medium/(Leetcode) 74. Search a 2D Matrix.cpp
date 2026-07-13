// Ques Link: https://leetcode.com/problems/search-a-2d-matrix/description/

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

        int low = 0, high = m * n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (matrix[mid / n][mid % n] == target)
            {
                return true;
            }
            else if (matrix[mid / n][mid % n] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 3;

    Solution obj;

    if (obj.searchMatrix(matrix, target))
        cout << "Target found\n";
    else
        cout << "Target not found\n";

    return 0;
}