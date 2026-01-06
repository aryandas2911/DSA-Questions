// Ques Link: https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int k = num;
        while (k > 0) {
            int l = k % 10;
            k = k / 10;
            if (num % l == 0) {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    int k = s.countDigits(n);
    cout << k;
    return 0;
}