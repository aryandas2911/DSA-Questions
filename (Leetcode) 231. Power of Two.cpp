// Ques Link: https://leetcode.com/problems/power-of-two/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        if (n == 1)
            return true;
        if (n % 2 != 0)
            return false;
        while (n % 2 == 0)
        {
            n = n / 2;
        }
        return n == 1;
    }
};

int main()
{
    Solution sol;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPowerOfTwo(num))
    {
        cout << num << " is a power of two." << endl;
    }
    else
    {
        cout << num << " is NOT a power of two." << endl;
    }

    return 0;
}