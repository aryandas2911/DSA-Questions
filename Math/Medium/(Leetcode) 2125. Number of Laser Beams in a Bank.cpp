// Ques Link: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        vector<int> arr;

        for (int i = 0; i < bank.size(); i++)
        {
            int ones = 0;

            for (int j = 0; j < bank[0].size(); j++)
            {
                if (bank[i][j] == '1')
                {
                    ones++;
                }
            }

            if (ones != 0)
            {
                arr.push_back(ones);
            }
        }

        int ans = 0;

        for (int i = 0; i + 1 < arr.size(); i++)
        {
            ans += arr[i] * arr[i + 1];
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<string> bank = {
        "011001",
        "000000",
        "010100",
        "001000"};

    cout << obj.numberOfBeams(bank) << endl;

    return 0;
}