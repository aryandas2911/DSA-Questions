// Ques Link: https://leetcode.com/problems/reverse-pairs/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        while (left <= mid)
            temp.push_back(arr[left++]);
        while (right <= high)
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }

    int countPairs(vector<int> &arr, int low, int mid, int high)
    {
        int cnt = 0;
        int right = mid + 1;

        for (int i = low; i <= mid; i++)
        {
            while (right <= high && (long long)arr[i] > 2LL * arr[right])
            {
                right++;
            }
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return 0;

        int mid = (low + high) / 2;
        int cnt = 0;

        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);

        return cnt;
    }

    int reversePairs(vector<int> &nums)
    {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};

int main()
{
    vector<int> nums = {1, 3, 2, 3, 1};

    Solution obj;
    int result = obj.reversePairs(nums);

    cout << "Reverse Pairs: " << result << endl;

    return 0;
}