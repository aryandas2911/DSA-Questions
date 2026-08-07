// Ques Link: https://leetcode.com/problems/height-checker/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> expected(heights.begin(), heights.end());
        sort(expected.begin(), expected.end());

        int count = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != expected[i])
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> heights(n);

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    cout << "Number of mismatched positions: "
         << obj.heightChecker(heights) << endl;

    return 0;
}