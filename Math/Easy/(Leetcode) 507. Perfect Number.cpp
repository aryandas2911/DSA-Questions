// Ques Link: https://leetcode.com/problems/perfect-number/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num == 1)
            return false;

        int sum = 0;

        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        return sum == num;
    }
};

int main()
{
    Solution sol;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.checkPerfectNumber(num))
        cout << num << " is a Perfect Number." << endl;
    else
        cout << num << " is NOT a Perfect Number." << endl;

    return 0;
}