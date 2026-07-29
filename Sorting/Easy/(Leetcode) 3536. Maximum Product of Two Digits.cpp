// Ques Link: https://leetcode.com/problems/maximum-product-of-two-digits/description

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProduct(int n)
    {
        vector<int> nums;

        while (n != 0)
        {
            nums.push_back(n % 10);
            n = n / 10;
        }

        sort(nums.begin(), nums.end());

        return nums[nums.size() - 1] * nums[nums.size() - 2];
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Maximum product of two digits: " << obj.maxProduct(n) << endl;

    return 0;
}