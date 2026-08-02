// Ques Link: https://leetcode.com/problems/digit-frequency-score/description/

#include <iostream>
using namespace std;

class Solution
{
public:
    int digitFrequencyScore(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }
};

int main()
{
    Solution sol;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digit Frequency Score: " << sol.digitFrequencyScore(n) << endl;

    return 0;
}