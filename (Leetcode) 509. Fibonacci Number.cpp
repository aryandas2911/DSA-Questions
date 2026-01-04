// Ques Link: https://leetcode.com/problems/fibonacci-number/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        return (fib(n - 1) + fib(n - 2));
    }
};

int main()
{
    Solution s;
    int x;
    cin >> x;
    int a = s.fib(x);
    cout << a;
    return 0;
}