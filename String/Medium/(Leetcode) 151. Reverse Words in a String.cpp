// Ques Link: https://leetcode.com/problems/reverse-words-in-a-string/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string result = "";

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                continue;
            }

            int end = i;

            while (i >= 0 && s[i] != ' ')
            {
                i--;
            }

            if (!result.empty())
            {
                result += ' ';
            }

            result += s.substr(i + 1, end - i);
        }

        return result;
    }
};

int main()
{
    Solution obj;

    string s = "  the   sky  is blue  ";

    cout << "Original String: \"" << s << "\"" << endl;
    cout << "Reversed Words : \"" << obj.reverseWords(s) << "\"" << endl;

    return 0;
}