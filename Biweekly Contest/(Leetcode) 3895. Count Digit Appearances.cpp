// Ques Link: https://leetcode.com/problems/count-digit-appearances/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countDigitOccurrences(vector<int> &nums, int digit)
    {
        int count = 0;
        for (auto num : nums)
        {
            while (num > 0)
            {
                int d = num % 10;
                if (d == digit)
                {
                    count++;
                }
                num = num / 10;
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;
    int n, digit;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter digit to count: ";
    cin >> digit;

    int result = obj.countDigitOccurrences(nums, digit);

    cout << "Total occurrences: " << result << endl;

    return 0;
}