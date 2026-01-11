// Ques Link: https://leetcode.com/problems/plus-one/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    Solution sol;

    vector<int> digits = {9};
    vector<int> result = sol.plusOne(digits);

    for (int d : result)
    {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}