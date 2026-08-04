// Ques Link: https://leetcode.com/problems/reverse-string-prefix/description/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string reversePrefix(string s, int k)
    {
        reverse(s.begin(), s.begin() + k);
        return s;
    }
};

int main()
{
    Solution sol;

    string s;
    int k;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Result: " << sol.reversePrefix(s, k) << endl;

    return 0;
}