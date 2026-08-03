// Ques Link: https://leetcode.com/problems/defanging-an-ip-address/description/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string answer = "";
        for (char ch : address)
        {
            if (ch == '.')
            {
                answer += "[.]";
                continue;
            }
            answer += ch;
        }
        return answer;
    }
};

int main()
{
    Solution sol;

    string address;
    cout << "Enter an IP address: ";
    cin >> address;

    cout << "Defanged IP Address: " << sol.defangIPaddr(address) << endl;

    return 0;
}