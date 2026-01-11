// Ques Link: https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x == 0)
            return true;
        int a = x;
        int s = 0;
        if (a > 0)
        {
            while (a != 0)
            {
                int r = a % 10;
                if (s > INT_MAX / 10)
                    return false;
                s = s * 10 + r;
                a = a / 10;
            }
            if (s == x)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution sol;

    int x;
    cin >> x;
    cout << sol.isPalindrome(x);

    return 0;
}