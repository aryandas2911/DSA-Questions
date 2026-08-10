// Ques Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxFreqSum(string s)
    {
        unordered_map<char, int> freq;

        for (char c : s)
        {
            freq[c]++;
        }

        int max_vowel = 0;
        int max_cons = 0;

        for (const auto &[ch, count] : freq)
        {
            if (isVowel(ch))
            {
                max_vowel = max(max_vowel, count);
            }
            else
            {
                max_cons = max(max_cons, count);
            }
        }

        return max_vowel + max_cons;
    }
};

int main()
{
    Solution solution;

    cout << solution.maxFreqSum("aab") << endl;
    cout << solution.maxFreqSum("aabbbcd") << endl;

    return 0;
}