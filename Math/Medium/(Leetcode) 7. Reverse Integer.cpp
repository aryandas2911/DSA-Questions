// Ques Link: https://leetcode.com/problems/reverse-integer/description/

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int num = 0;
        while (x != 0)
        {
            int last = x % 10;
            if (num > INT_MAX / 10 || num < INT_MIN / 10)
                return 0;
            num = num * 10 + last;
            x = x / 10;
        }
        return num;
    }
};

int main()
{
    Solution s;
    int num = 120;
    int k = s.reverse(num);
    cout << k;
    return 0;
}