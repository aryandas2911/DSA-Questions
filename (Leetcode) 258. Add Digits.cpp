// Ques Link: https://leetcode.com/problems/add-digits/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        while (num >= 10)
        {
            int sum = 0;
            while (num > 0)
            {
                int last = num % 10;
                sum += last;
                num = num / 10;
            }
            num = sum;
        }
        return num;
    }
};

int main()
{
    Solution s;
    int x;
    cin >> x;
    int k = s.addDigits(x);
    cout << k;
    return 0;
}