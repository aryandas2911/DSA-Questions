// Ques Link: https://leetcode.com/problems/sum-of-square-numbers/description/

#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long a = 0;
        long long b = floor(sqrt(c));

        if (c == 1)
        {
            return true;
        }

        while (a <= b)
        {
            if ((a * a) + (b * b) == c)
            {
                return true;
            }
            else if ((b * b) > c - (a * a))
            {
                b--;
            }
            else
            {
                a++;
            }
        }

        return false;
    }
};

int main()
{
    Solution sol;

    int c;
    cout << "Enter c: ";
    cin >> c;

    if (sol.judgeSquareSum(c))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}