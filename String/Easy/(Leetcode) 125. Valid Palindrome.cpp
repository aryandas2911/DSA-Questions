// Ques Link: https://leetcode.com/problems/valid-palindrome/description

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string changed = "";

        for (char ch : s)
        {
            if (isalnum(ch))
            {
                changed += tolower(ch);
            }
        }

        int n = changed.length();
        for (int i = 0; i < n / 2; i++)
        {
            if (changed[i] != changed[n - 1 - i])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution sol;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (sol.isPalindrome(s))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}