// Ques Link: https://leetcode.com/problems/to-lower-case/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        string a;
        for (char i : s)
        {
            if (isupper(i))
            {
                a += char(tolower(i));
            }
            else
            {
                a += i;
            }
        }
        return a;
    }
};

int main()
{
    Solution s;
    string st;
    cin >> st;
    string k = s.toLowerCase(st);
    cout << k;
    return 0;
}