// Ques Link: https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int freq[26] = {0};
        for (auto i : s)
        {
            freq[i - 'a'] += 1;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    string st;
    cin >> st;
    int k = s.firstUniqChar(st);
    cout << k;
    return 0;
}