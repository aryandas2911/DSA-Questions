// Ques link: https://leetcode.com/problems/valid-boomerang/description/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isBoomerang(vector<vector<int>> &points)
    {
        int area = abs(
            points[0][0] * (points[1][1] - points[2][1]) +
            points[1][0] * (points[2][1] - points[0][1]) +
            points[2][0] * (points[0][1] - points[1][1]));

        return area ? true : false;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> points = {
        {1, 1},
        {2, 3},
        {3, 2}};

    cout << boolalpha << sol.isBoomerang(points) << endl;

    return 0;
}