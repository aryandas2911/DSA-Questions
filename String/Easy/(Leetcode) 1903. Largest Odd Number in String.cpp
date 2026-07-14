// Ques Link: https://leetcode.com/problems/largest-odd-number-in-string/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        string result = "";
        for (int i = num.length() - 1; i >= 0; i--)
        {
            if (int(num[i]) % 2 == 0)
            {
                continue;
            }
            int end = i;
            while (i >= 0 && int(num[i]) != 0)
            {
                i--;
            }
            result += num.substr(i + 1, end - i);
        }
        return result;
    }
};

int main()
{
    Solution obj;

    string num;
    cin >> num;

    cout << obj.largestOddNumber(num) << endl;

    return 0;
}