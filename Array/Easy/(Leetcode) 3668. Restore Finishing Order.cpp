// Ques Link: https://leetcode.com/problems/restore-finishing-order/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> recoverOrder(vector<int> &order, vector<int> &friends)
    {
        vector<int> result;
        for (auto i : order)
        {
            if (find(friends.begin(), friends.end(), i) != friends.end())
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> order = {3, 1, 2, 4, 5};
    vector<int> friends = {2, 5, 3};

    vector<int> result = sol.recoverOrder(order, friends);

    cout << "Recovered Order: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}