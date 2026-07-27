// Ques Link: https://leetcode.com/problems/reverse-vowels-of-a-string/description/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int i = 0, j = s.length() - 1;

        while (i < j)
        {

            if (find(vowels.begin(), vowels.end(), tolower(s[i])) ==
                vowels.end())
            {
                i++;
            }
            else if (find(vowels.begin(), vowels.end(), tolower(s[j])) ==
                     vowels.end())
            {
                j--;
            }
            else
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Output: " << obj.reverseVowels(s) << endl;

    return 0;
}