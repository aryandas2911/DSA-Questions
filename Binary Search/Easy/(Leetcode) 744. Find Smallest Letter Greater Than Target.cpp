// Ques Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/description

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char ans = '\0';
        int low = 0, high = letters.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (letters[mid] > target)
            {
                ans = letters[mid];
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (ans != '\0')
        {
            return ans;
        }
        else
        {
            return letters[0];
        }
    }
};

int main()
{
    Solution sol;

    vector<char> letters = {'c', 'f', 'j'};
    char target;

    cout << "Enter target character: ";
    cin >> target;

    char result = sol.nextGreatestLetter(letters, target);

    cout << "Next greatest letter: " << result << endl;

    return 0;
}