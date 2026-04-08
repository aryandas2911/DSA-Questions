// Ques Link: https://leetcode.com/problems/powx-n/description/

#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        return pow(x, n);
    }
};

int main()
{
    Solution sol;

    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    double result = sol.myPow(x, n);

    cout << "Result: " << result << endl;

    return 0;
}