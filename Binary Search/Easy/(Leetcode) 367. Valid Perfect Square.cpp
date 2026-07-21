// Ques Link: https://leetcode.com/problems/valid-perfect-square/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;

        int low = 0, high = num / 2;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;

            if (mid * mid == num)
            {
                return true;
            }
            else if (mid * mid > num)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return false;
    }
};

int main()
{
    Solution obj;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (obj.isPerfectSquare(num))
        cout << num << " is a perfect square.\n";
    else
        cout << num << " is not a perfect square.\n";

    return 0;
}