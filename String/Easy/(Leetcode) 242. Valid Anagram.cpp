// Ques Link: https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int s_size = s.length();
        int t_size = t.length();

        if (s_size != t_size)
        {
            return false;
        }

        int freq[26] = {0};

        for (char i : s)
        {
            freq[i - 'a']++;
        }

        for (char i : t)
        {
            freq[i - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
};

int main()
{
    Solution obj;

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (obj.isAnagram(s, t))
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;

    return 0;
}
