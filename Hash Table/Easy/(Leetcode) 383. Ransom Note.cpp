// Ques Link: https://leetcode.com/problems/ransom-note/description

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> mag_freq;

        for (char ch : magazine)
        {
            mag_freq[ch]++;
        }

        for (char ch : ransomNote)
        {
            if (mag_freq.find(ch) == mag_freq.end())
            {
                return false;
            }
            if (mag_freq[ch] <= 0)
            {
                return false;
            }
            mag_freq[ch]--;
        }

        return true;
    }
};

int main()
{
    Solution sol;

    string ransomNote, magazine;
    cin >> ransomNote >> magazine;

    cout << (sol.canConstruct(ransomNote, magazine) ? "true" : "false") << endl;

    return 0;
}