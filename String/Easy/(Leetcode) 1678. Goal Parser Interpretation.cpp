// Ques Link: https://leetcode.com/problems/goal-parser-interpretation/description/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        string answer = "";
        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == 'G')
            {
                answer += command[i];
            }
            else if (command[i] == '(' && command[i + 1] == 'a')
            {
                answer += "al";
            }
            else if (command[i] == '(' && command[i + 1] == ')')
            {
                answer += 'o';
            }
        }
        return answer;
    }
};

int main()
{
    Solution sol;

    string command;
    cout << "Enter command: ";
    cin >> command;

    cout << "Output: " << sol.interpret(command) << endl;

    return 0;
}