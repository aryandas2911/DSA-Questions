// Ques Link: https://leetcode.com/problems/weighted-word-mapping/description/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string mapWordWeights(vector<string> &words, vector<int> &weights)
    {
        string ans = "";

        for (auto word : words)
        {
            int sum = 0;

            for (char c : word)
            {
                sum += weights[c - 'a'];
            }

            ans += char('a' + (25 - sum % 26));
        }

        return ans;
    }
};

int main()
{
    vector<string> words = {"abcd", "def", "xyz"};

    vector<int> weights = {
        5, 3, 12, 14, 1, 2, 3, 2, 10, 6,
        6, 9, 7, 8, 7, 10, 8, 9, 6, 9,
        9, 8, 3, 7, 7, 2};

    Solution obj;

    string result = obj.mapWordWeights(words, weights);

    cout << result << endl;

    return 0;
}