// Ques Link: https://leetcode.com/problems/find-the-difference/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int freq[26] = {0};

        for (char ch : s)
            freq[ch - 'a']++;

        for (char ch : t)
            freq[ch - 'a']--;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
                return 'a' + i;
        }

        return ' '; // Should never be reached
    }
};

int main()
{
    Solution obj;

    string s = "abcd";
    string t = "abcde";

    cout << "Added character: " << obj.findTheDifference(s, t) << endl;

    return 0;
}