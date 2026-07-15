// Ques Link: https://leetcode.com/problems/sort-characters-by-frequency/description/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> freq;

        for (char c : s)
        {
            freq[c]++;
        }

        vector<pair<char, int>> order;

        for (auto p : freq)
        {
            order.push_back({p.first, p.second});
        }

        sort(order.begin(), order.end(), [](auto &a, auto &b)
             {
            if (a.second != b.second)
                return a.second > b.second;
            return a.first < b.first; });

        string ans = "";

        for (auto p : order)
        {
            ans += string(p.second, p.first);
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Sorted by frequency: " << obj.frequencySort(s) << endl;

    return 0;
}