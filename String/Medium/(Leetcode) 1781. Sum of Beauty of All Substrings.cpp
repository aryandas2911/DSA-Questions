// Ques Link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/

#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int beautySum(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int freq[26] = {0};
            for (int j = i; j < s.length(); j++)
            {
                freq[s[j] - 'a']++;

                int mx = 0, mn = INT_MAX;
                for (int k = 0; k < 26; k++)
                {
                    if (freq[k] > 0)
                    {
                        mx = max(mx, freq[k]);
                        mn = min(mn, freq[k]);
                    }
                }

                ans += (mx - mn);
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    string s;
    cin >> s;

    cout << obj.beautySum(s) << endl;

    return 0;
}