// Ques Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int m = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int c = 1;
            for (char j : sentences[i])
            {
                if (j == ' ')
                {
                    c++;
                }
            }
            if (c > m)
            {
                m = c;
            }
        }
        return m;
    }
};

int main()
{
    Solution sol;

    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"};

    cout << sol.mostWordsFound(sentences) << endl;

    return 0;
}