// Ques Link: https://leetcode.com/problems/jewels-and-stones/description/

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char, bool> is_jewel;

        for (char ch : jewels)
        {
            if (is_jewel[ch])
            {
                continue;
            }
            is_jewel[ch] = true;
        }

        int count = 0;
        for (char ch : stones)
        {
            if (is_jewel.find(ch) != is_jewel.end())
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    string jewels, stones;

    cout << "Enter jewels: ";
    cin >> jewels;

    cout << "Enter stones: ";
    cin >> stones;

    int result = sol.numJewelsInStones(jewels, stones);

    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}