// Ques Link: https://leetcode.com/problems/find-a-peak-element-ii/description/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int max = INT_MIN;
            int row = -1;

            for (int i = 0; i < m; i++)
            {
                if (mat[i][mid] > max)
                {
                    max = mat[i][mid];
                    row = i;
                }
            }

            if (mid == 0)
            {
                if (max > mat[row][mid + 1])
                {
                    return {row, mid};
                }
            }

            if (mid == n - 1)
            {
                if (max > mat[row][mid - 1])
                {
                    return {row, mid};
                }
            }

            if (max > mat[row][mid - 1] && max > mat[row][mid + 1])
            {
                return {row, mid};
            }
            else if (max < mat[row][mid - 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};

int main()
{
    vector<vector<int>> mat = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}};

    Solution obj;
    vector<int> ans = obj.findPeakGrid(mat);

    cout << "Peak found at: (" << ans[0] << ", " << ans[1] << ")\n";
    return 0;
}