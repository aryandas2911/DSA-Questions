// Ques Link: https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/description/

#include <iostream>
#include <vector>
#include <map>
#include <numeric>
using namespace std;

class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {
        map<int, int> freq;

        for (auto i : deck)
        {
            freq[i]++;
        }

        int g = 0;

        for (const auto &i : freq)
        {
            g = gcd(g, i.second);
        }

        return g > 1;
    }
};

int main()
{
    Solution sol;

    vector<int> deck = {1, 1, 2, 2, 2, 2, 3, 3};

    cout << boolalpha << sol.hasGroupsSizeX(deck) << endl;

    return 0;
}