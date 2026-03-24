// Ques Link: https://leetcode.com/problems/find-if-digit-game-can-be-won/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s = 0, d = 0;

        for (auto i : nums) {
            if (i < 10) {
                s += i;
            } 
            else if (i < 100) {
                d += i;
            }
        }

        return s != d;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 10, 20};  // example input

    if (sol.canAliceWin(nums))
        cout << "Alice can win" << endl;
    else
        cout << "Alice cannot win" << endl;

    return 0;
}