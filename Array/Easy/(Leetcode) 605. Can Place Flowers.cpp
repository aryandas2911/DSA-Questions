// Ques Link: https://leetcode.com/problems/can-place-flowers/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if (i == 0)
                {
                    if (flowerbed.size() == 1 || flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else if (i == flowerbed.size() - 1)
                {
                    if (flowerbed[i - 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else
                {
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
        }
        return n <= 0;
    }
};

int main()
{
    Solution sol;

    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    if (sol.canPlaceFlowers(flowerbed, n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}