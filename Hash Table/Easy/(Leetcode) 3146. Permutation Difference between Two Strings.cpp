// Ques Link: https://leetcode.com/problems/permutation-difference-between-two-strings/description/

#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

class Solution
{
public:
    int findPermutationDifference(string s, string t)
    {
        map<char, int> s_map;
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            s_map[s[i]] = i;
        }

        for (int j = 0; j < t.length(); j++)
        {
            count += abs(s_map[t[j]] - j);
        }

        return count;
    }
};

int main()
{
    Solution obj;

    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    cout << "Permutation Difference: " << obj.findPermutationDifference(s, t) << endl;

    return 0;
}   