// Ques Link: https://leetcode.com/problems/reverse-prefix-of-word/description/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == ch)
            {
                reverse(word.begin(), word.begin() + i + 1);
                break;
            }
        }
        return word;
    }
};

int main()
{
    Solution sol;

    string word = "abcdefd";
    char ch = 'd';

    cout << sol.reversePrefix(word, ch) << endl;

    return 0;
}