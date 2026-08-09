// Ques Link: https://leetcode.com/problems/rank-transform-of-an-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        vector<int> arrange(arr.begin(), arr.end());
        sort(arrange.begin(), arrange.end());

        unordered_map<int, int> rank;
        int r = 1;

        for (auto i : arrange)
        {
            if (rank[i])
            {
                continue;
            }
            rank[i] = r;
            r++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};

int main()
{
    Solution solution;

    vector<int> arr = {40, 10, 20, 30, 20};

    vector<int> result = solution.arrayRankTransform(arr);

    cout << "Ranked array: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}