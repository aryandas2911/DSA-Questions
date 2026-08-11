// Ques Link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> digits;

        while (num != 0)
        {
            digits.push_back(num % 10);
            num /= 10;
        }

        sort(digits.begin(), digits.end());

        int new1 = 0, new2 = 0;
        int n = digits.size();

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                new1 = new1 * 10 + digits[i];
            }
            else
            {
                new2 = new2 * 10 + digits[i];
            }
        }

        return new1 + new2;
    }
};

int main()
{
    Solution obj;

    int num;
    cin >> num;

    cout << obj.minimumSum(num) << endl;

    return 0;
}