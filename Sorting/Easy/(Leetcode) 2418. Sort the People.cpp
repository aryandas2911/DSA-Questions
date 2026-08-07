// Ques Link: https://leetcode.com/problems/sort-the-people/description/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <functional>

using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        map<int, string, greater<int>> join;

        for (int i = 0; i < names.size(); i++)
        {
            join[heights[i]] = names[i];
        }

        vector<string> answer;

        for (const auto &i : join)
        {
            answer.push_back(i.second);
        }

        return answer;
    }
};

int main()
{
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};

    Solution obj;

    vector<string> result = obj.sortPeople(names, heights);

    cout << "Sorted people by height:" << endl;

    for (string person : result)
    {
        cout << person << endl;
    }

    return 0;
}