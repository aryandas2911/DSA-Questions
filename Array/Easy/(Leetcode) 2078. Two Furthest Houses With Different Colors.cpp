// Ques Link: https://leetcode.com/problems/two-furthest-houses-with-different-colors/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        int n = colors.size();
        int dist1 = 0;
        int dist2 = 0;

        // Compare with last element
        for (int i = 0; i < n - 1; i++)
        {
            if (colors[i] != colors[n - 1])
            {
                dist1 = n - 1 - i;
                break;
            }
        }

        // Compare with first element
        for (int j = n - 1; j >= 0; j--)
        {
            if (colors[j] != colors[0])
            {
                dist2 = j;
                break;
            }
        }

        return max(dist1, dist2);
    }
};

int main()
{
    Solution obj;

    // Example test case
    vector<int> colors = {1, 1, 1, 6, 1, 1, 1};

    int result = obj.maxDistance(colors);

    cout << "Maximum Distance: " << result << endl;

    return 0;
}