// Ques Link: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int sum = 0;
        int product = 1;
        int num = n;

        while (n != 0)
        {
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }

        return num % (sum + product) == 0;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    cout << boolalpha << obj.checkDivisibility(n) << endl;

    return 0;
}