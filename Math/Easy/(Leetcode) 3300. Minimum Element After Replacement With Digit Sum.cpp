// Ques Link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> sum;

        for (auto i : nums) {
            int digit = 0;

            while (i != 0) {
                digit += i % 10;
                i /= 10;
            }

            sum.push_back(digit);
        }

        return *min_element(sum.begin(), sum.end());
    }
};

int main() {
    Solution sol;

    vector<int> nums = {10, 12, 13, 14};

    cout << sol.minElement(nums) << endl;

    return 0;
}