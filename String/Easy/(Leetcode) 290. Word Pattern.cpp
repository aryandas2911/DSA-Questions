// Ques Link: https://leetcode.com/problems/word-pattern/description/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> words;
        int start = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                words.push_back(s.substr(start, i - start));
                start = i + 1;
            }
        }

        words.push_back(s.substr(start));

        if (pattern.size() != words.size())
            return false;

        map<char, string> charToWord;
        map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); i++)
        {
            char c = pattern[i];
            string word = words[i];

            if (charToWord.find(c) != charToWord.end() && charToWord[c] != word)
                return false;

            if (wordToChar.find(word) != wordToChar.end() && wordToChar[word] != c)
                return false;

            charToWord[c] = word;
            wordToChar[word] = c;
        }

        return true;
    }
};

int main()
{
    Solution sol;

    string pattern, s;

    cout << "Enter pattern: ";
    cin >> pattern;

    cin.ignore(); // Ignore the newline after pattern input

    cout << "Enter string: ";
    getline(cin, s);

    if (sol.wordPattern(pattern, s))
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}