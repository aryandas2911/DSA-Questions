// Ques Link: https://leetcode.com/problems/merge-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int end = m - 1;
        int start = 0;

        // Step 1: Swap elements
        while (end >= 0 && start < n)
        {
            if (nums1[end] > nums2[start])
            {
                swap(nums1[end], nums2[start]);
                end--;
                start++;
            }
            else
            {
                break;
            }
        }

        // Step 2: Sort only valid parts
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());

        // Step 3: Copy nums2 into nums1 buffer
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    // Print result
    for (int x : nums1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}