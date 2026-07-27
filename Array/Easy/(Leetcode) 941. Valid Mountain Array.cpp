// Ques Link: https://leetcode.com/problems/valid-mountain-array/description//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
            return false;

        int mx = *max_element(arr.begin(), arr.end());
        int idx = -1;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == mx)
            {
                idx = i;
                break;
            }
        }

        if (idx == 0 || idx == arr.size() - 1)
        {
            return false;
        }

        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j + 1] == arr[j])
            {
                return false;
            }
            else if (j < idx && arr[j] > arr[j + 1])
            {
                return false;
            }
            else if (j >= idx && arr[j] < arr[j + 1])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {0, 3, 2, 1};

    if (obj.validMountainArray(arr))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}