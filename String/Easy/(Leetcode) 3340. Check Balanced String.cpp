// Ques Link: https://leetcode.com/problems/check-balanced-string/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isBalanced(string num)
    {
        int sum = 0;

        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 == 0)
            {
                sum += num[i] - '0';
            }
            else
            {
                sum -= num[i] - '0';
            }
        }

        return sum == 0;
    }
};

int main()
{
    Solution obj;

    string num;
    cin >> num;

    cout << boolalpha << obj.isBalanced(num);

    return 0;
}