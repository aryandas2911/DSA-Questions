// Ques Link: https://leetcode.com/problems/truncate-sentence/description/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                count++;
            }
            if (count == k)
            {
                return s.substr(0, i);
            }
        }
        return s;
    }
};

int main()
{
    Solution obj;

    string s;
    int k;

    cout << "Enter the sentence: ";
    getline(cin, s);

    cout << "Enter k: ";
    cin >> k;

    cout << "Truncated sentence: " << obj.truncateSentence(s, k) << endl;

    return 0;
}