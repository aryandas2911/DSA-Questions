// Ques Link: https://leetcode.com/problems/mirror-distance-of-an-integer/description/

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int mirrorDistance(int n)
    {
        int num = n;
        int r = 0;
        while (n != 0)
        {
            int l = n % 10;
            r = r * 10 + l;
            n = n / 10;
        }
        return abs(num - r);
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    cout << obj.mirrorDistance(n) << endl;

    return 0;
}