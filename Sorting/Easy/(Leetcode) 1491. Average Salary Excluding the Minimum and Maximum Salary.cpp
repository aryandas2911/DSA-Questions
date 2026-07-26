// Ques Link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        sort(salary.begin(), salary.end());

        int sum = 0;
        for (int i = 1; i < salary.size() - 1; i++)
        {
            sum += salary[i];
        }

        return (double)sum / (salary.size() - 2);
    }
};

int main()
{
    Solution obj;

    vector<int> salary = {4000, 3000, 1000, 2000};

    cout << obj.average(salary) << endl;

    return 0;
}