// Ques Link: https://leetcode.com/problems/find-words-containing-character/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> n;
        for (int i = 0; i < words.size(); i++)
        {
            for (char j : words[i])
            {
                if (j == x)
                {
                    n.push_back(i);
                    break;
                }
            }
        }
        return n;
    }
};

int main()
{
    Solution sol;

    vector<string> words = {"leet", "code", "practice", "makes", "perfect"};
    char x = 'e';

    vector<int> result = sol.findWordsContaining(words, x);

    for (int idx : result)
    {
        cout << idx << " ";
    }

    return 0;
}
