// Ques Link: https://leetcode.com/problems/stone-removal-game/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool canAliceWin(int n)
    {
        int stones = n;
        int person = 0;

        for (int i = 10; i >= 1; i--)
        {
            person++;

            if (stones < i && person % 2 == 0)
            {
                return true;
            }
            else if (stones < i && person % 2 != 0)
            {
                return false;
            }

            stones -= i;
        }

        return false;
    }
};

int main()
{
    Solution sol;

    int n;
    cin >> n;

    bool result = sol.canAliceWin(n);

    cout << (result ? "true" : "false") << endl;

    return 0;
}