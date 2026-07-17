// Ques Link: https://leetcode.com/problems/intersection-of-two-arrays/description

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        set<int> visited;

        for (auto i : nums1)
        {
            if (visited.find(i) != visited.end())
            {
                continue;
            }

            visited.insert(i);

            int low = 0, high = nums2.size() - 1;

            while (low <= high)
            {
                int mid = low + (high - low) / 2;

                if (nums2[mid] == i)
                {
                    result.push_back(i);
                    break;
                }
                else if (i < nums2[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution obj;

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> ans = obj.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}