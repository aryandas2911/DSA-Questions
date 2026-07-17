// Ques Link: https://leetcode.com/problems/intersection-of-two-arrays/description/

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s(nums1.begin(), nums1.end());
        vector<int> result;

        for (int i : nums2)
        {
            if (s.find(i) != s.end())
            {
                result.push_back(i);
                s.erase(i);
            }
        }

        return result;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    Solution obj;
    vector<int> ans = obj.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}