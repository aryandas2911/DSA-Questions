// Ques Link: https://leetcode.com/problems/first-matching-character-from-both-ends/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int firstMatchingIndex(string s)
    {
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    int result = obj.firstMatchingIndex(s);

    cout << "First Matching Index: " << result << endl;

    return 0;
}