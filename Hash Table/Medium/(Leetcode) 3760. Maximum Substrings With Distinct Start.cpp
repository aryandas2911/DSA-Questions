// Ques Link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/description

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    int maxDistinct(string s)
    {
        map<char, int> chars;
        for (char ch : s)
        {
            if (chars[ch] == 1)
            {
                continue;
            }
            chars[ch] = 1;
        }
        return chars.size();
    }
};

int main()
{
    Solution obj;

    string s;
    cin >> s;

    cout << obj.maxDistinct(s) << endl;

    return 0;
}