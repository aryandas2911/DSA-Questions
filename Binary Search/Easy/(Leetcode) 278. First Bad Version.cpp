// Ques Link: https://leetcode.com/problems/first-bad-version/description/

#include <iostream>
using namespace std;

// Mock implementation for testing
int bad = 4;

bool isBadVersion(int version)
{
    return version >= bad;
}

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int low = 1, high = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isBadVersion(mid))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main()
{
    Solution obj;

    int n = 5;
    cout << "First bad version: " << obj.firstBadVersion(n) << endl;

    return 0;
}