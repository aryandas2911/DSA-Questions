// Ques Link: https://leetcode.com/problems/distribute-money-to-maximum-children/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int distMoney(int money, int children)
    {
        if (money < children)
        {
            return -1;
        }

        int ans = 0;
        int remaining = money - children;

        for (int i = 1; i <= children; i++)
        {
            if (remaining < 7)
            {
                break;
            }

            remaining -= 7;
            ans++;
        }

        if (ans == children)
        {
            if (remaining > 0)
            {
                return ans - 1;
            }
            return ans;
        }

        if (ans == children - 1 && remaining == 3)
        {
            return ans - 1;
        }

        return ans;
    }
};

int main()
{
    int money, children;

    cin >> money >> children;

    Solution obj;

    cout << obj.distMoney(money, children) << endl;

    return 0;
}