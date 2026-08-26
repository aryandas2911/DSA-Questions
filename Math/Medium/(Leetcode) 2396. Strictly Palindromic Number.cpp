// Ques Link: https://leetcode.com/problems/strictly-palindromic-number/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{

public:
    bool isStrictlyPalindromic(int n)
    {

        for (int i = 2; i <= n - 2; i++)
        {

            int given = n;
            string num = "";

            while (given != 0)
            {

                num += char('0' + given % i);
                given = given / i;
            }

            int k = num.size();

            for (int j = 0; j < k / 2; j++)
            {

                if (num[j] != num[k - j - 1])
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{

    Solution s;

    int n;
    cin >> n;

    cout << boolalpha << s.isStrictlyPalindromic(n) << endl;

    return 0;
}