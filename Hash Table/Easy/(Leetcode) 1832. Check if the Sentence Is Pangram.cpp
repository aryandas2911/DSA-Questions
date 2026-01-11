// Ques Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        int s[26] = {0};
        for (char i : sentence)
        {
            s[i - 'a'] += 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (s[i] == 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution s;
    string st;
    getline(cin, st);
    cout << s.checkIfPangram(st);
    return 0;
}