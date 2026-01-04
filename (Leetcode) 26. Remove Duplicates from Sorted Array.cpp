// Ques Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0){
            return 0;
        }
        int k=1;
        for(int i=1;i<nums.size();i++){
            if (nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 1, 2, 2, 3, 3};

    int k = sol.removeDuplicates(nums);

    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}