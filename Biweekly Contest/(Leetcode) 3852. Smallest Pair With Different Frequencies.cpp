// Ques Link: https://leetcode.com/problems/smallest-pair-with-different-frequencies/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minDistinctFreqPair(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (int num : nums)
        {
            freq[num]++;
        }

        vector<pair<int, int>> elements(freq.begin(), freq.end());

        sort(elements.begin(), elements.end());

        for (int i = 0; i < elements.size() - 1; i++)
        {
            for (int j = i + 1; j < elements.size(); j++)
            {
                if (elements[i].second != elements[j].second)
                {
                    return {elements[i].first, elements[j].first};
                }
            }
        }

        return {-1, -1};
    }
};

int main()
{
    Solution sol;

    vector<int> nums={1,1,2,2,3,4};

    vector<int> result = sol.minDistinctFreqPair(nums);

    cout << "Result: " << result[0] << " " << result[1] << endl;

    return 0;
}