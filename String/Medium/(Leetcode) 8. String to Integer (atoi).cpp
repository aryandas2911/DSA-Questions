// Ques Link: https://leetcode.com/problems/string-to-integer-atoi/description/

#include <iostream>
#include <string>
#include <climits>
#include <cctype>

using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0, n = s.length();
        int sign = 1;
        long long num = 0;

        while (i < n && s[i] == ' ')
        {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-'))
        {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < n && isdigit(s[i]))
        {
            int digit = s[i] - '0';

            num = num * 10 + digit;

            if (sign * num >= INT_MAX)
                return INT_MAX;
            if (sign * num <= INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Converted integer: " << obj.myAtoi(s) << endl;

    return 0;
}