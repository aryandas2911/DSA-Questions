// Ques Link: https://leetcode.com/problems/shuffle-string/description/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string answer(s.size(), ' ');
        for (int i = 0; i < indices.size(); i++)
        {
            answer[indices[i]] = s[i];
        }
        return answer;
    }
};

int main()
{
    Solution obj;

    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    string result = obj.restoreString(s, indices);

    cout << "Restored String: " << result << endl;

    return 0;
}