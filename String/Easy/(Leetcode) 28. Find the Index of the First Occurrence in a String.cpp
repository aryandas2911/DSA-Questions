// Ques Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
            return 0;
        if (needle.size() > haystack.size())
            return -1;

        for (size_t i = 0; i + needle.size() <= haystack.size(); ++i)
        {
            bool match = true;
            for (size_t j = 0; j < needle.size(); ++j)
            {
                if (haystack[i + j] != needle[j])
                {
                    match = false;
                    break;
                }
            }
            if (match)
                return static_cast<int>(i);
        }
        return -1;
    }
};

int main()
{
    Solution sol;

    string haystack, needle;
    cout << "Enter haystack: ";
    cin >> haystack;
    cout << "Enter needle: ";
    cin >> needle;

    int result = sol.strStr(haystack, needle);

    cout << "Result index: " << result << endl;

    return 0;
}
