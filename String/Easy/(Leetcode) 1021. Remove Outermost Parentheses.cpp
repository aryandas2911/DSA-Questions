// Ques Link: https://leetcode.com/problems/remove-outermost-parentheses/description

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans;
        int counter = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                if (counter > 0)
                    ans += c;
                counter++;
            }
            else
            {
                counter--;
                if (counter > 0)
                    ans += c;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter a valid parentheses string: ";
    cin >> s;

    cout << "Output: " << obj.removeOuterParentheses(s) << endl;

    return 0;
}