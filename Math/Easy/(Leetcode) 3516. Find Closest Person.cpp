// Ques Link: https://leetcode.com/problems/find-closest-person/description/

#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int x_diff = abs(z - x);
        int y_diff = abs(z - y);

        if (x_diff < y_diff)
        {
            return 1;
        }
        else if (x_diff > y_diff)
        {
            return 2;
        }

        return 0;
    }
};

int main()
{
    Solution sol;

    int x, y, z;
    cout << "Enter x, y, z: ";
    cin >> x >> y >> z;

    cout << "Result: " << sol.findClosest(x, y, z) << endl;

    return 0;
}