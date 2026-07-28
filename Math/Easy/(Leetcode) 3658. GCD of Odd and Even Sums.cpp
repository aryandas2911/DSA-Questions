// Ques Link: https://leetcode.com/problems/gcd-of-odd-and-even-sums/description/

#include <iostream>
#include <numeric> // for std::gcd

using namespace std;

class Solution
{
public:
    int gcdOfOddEvenSums(int n)
    {
        int sumOdd = n * n;
        int sumEven = n * (n + 1);
        return gcd(sumOdd, sumEven);
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "GCD of odd and even sums: " << obj.gcdOfOddEvenSums(n) << endl;

    return 0;
}