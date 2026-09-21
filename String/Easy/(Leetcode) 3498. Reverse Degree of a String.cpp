// Ques Link: https://leetcode.com/problems/reverse-degree-of-a-string/description/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int reverseDegree(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += (26 - (s[i] - 'a')) * (i + 1);
        }
        return sum;
    }
};

int main()
{
    Solution solver;
    string test1 = "a";
    cout << "Input: \"" << test1 << "\" -> Reverse Degree: " << solver.reverseDegree(test1) << endl;
    string test2 = "z";
    cout << "Input: \"" << test2 << "\" -> Reverse Degree: " << solver.reverseDegree(test2) << endl;
    string test3 = "abc";
    cout << "Input: \"" << test3 << "\" -> Reverse Degree: " << solver.reverseDegree(test3) << endl;

    return 0;
}
