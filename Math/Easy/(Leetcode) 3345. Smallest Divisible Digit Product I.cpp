// Ques Link: https://leetcode.com/problems/smallest-divisible-digit-product-i/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestNumber(int n, int t)
    {
        while (n <= 100)
        {
            int num = n;
            int product = 1;

            while (num != 0)
            {
                product *= num % 10;
                num = num / 10;
            }

            if (product % t == 0)
            {
                return n;
            }
            else
            {
                n++;
            }
        }

        return -1;
    }
};

int main()
{
    Solution obj;

    int n, t;
    cout << "Enter n and t: ";
    cin >> n >> t;

    cout << "Smallest Number: " << obj.smallestNumber(n, t) << endl;

    return 0;
}