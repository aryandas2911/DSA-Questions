// Ques Link: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        vector<int> ans;
        ans.push_back(pref[0]);

        for (int i = 1; i < pref.size(); i++)
        {
            ans.push_back(pref[i] ^ pref[i - 1]);
        }

        return ans;
    }
};

int main()
{
    vector<int> pref = {5, 7, 7, 4, 5};

    Solution obj;
    vector<int> ans = obj.findArray(pref);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}