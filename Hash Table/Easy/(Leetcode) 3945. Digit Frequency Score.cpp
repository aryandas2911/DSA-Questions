// Ques Link: https://leetcode.com/problems/digit-frequency-score/description

#include <iostream>
#include <map>

using namespace std;

class Solution
{
public:
    int digitFrequencyScore(int n)
    {
        map<int, int> freq;

        while (n != 0)
        {
            freq[n % 10]++;
            n = n / 10;
        }

        int sum = 0;
        for (auto i : freq)
        {
            sum += i.first * i.second;
        }

        return sum;
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digit Frequency Score: " << obj.digitFrequencyScore(n) << endl;

    return 0;
}