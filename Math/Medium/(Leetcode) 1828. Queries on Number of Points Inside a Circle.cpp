// Ques Link: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points,
                            vector<vector<int>> &queries)
    {
        vector<int> ans;

        for (int i = 0; i < queries.size(); i++)
        {
            int point = 0;

            for (int j = 0; j < points.size(); j++)
            {
                if ((points[j][0] - queries[i][0]) * (points[j][0] - queries[i][0]) +
                        (points[j][1] - queries[i][1]) * (points[j][1] - queries[i][1]) <=
                    queries[i][2] * queries[i][2])
                {
                    point++;
                }
            }

            ans.push_back(point);
        }

        return ans;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> points = {
        {1, 3},
        {3, 3},
        {5, 3},
        {2, 2}};

    vector<vector<int>> queries = {
        {2, 3, 1},
        {4, 3, 1},
        {1, 1, 2}};

    vector<int> ans = s.countPoints(points, queries);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}