// Ques Link: https://leetcode.com/problems/find-common-characters/description/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        map<char, int> freq;

        for (char ch : words[0])
        {
            freq[ch]++;
        }

        for (int i = 1; i < words.size(); i++)
        {
            map<char, int> freq_word;

            for (char ch : words[i])
            {
                freq_word[ch]++;
            }

            for (auto &p : freq)
            {
                p.second = min(p.second, freq_word[p.first]);
            }
        }

        vector<string> result;

        for (auto &p : freq)
        {
            while (p.second--)
            {
                result.push_back(string(1, p.first));
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<string> words = {"bella", "label", "roller"};

    vector<string> result = sol.commonChars(words);

    cout << "Common characters: ";
    for (string ch : result)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}