// Ques Link: https://leetcode.com/problems/traffic-signal-color/description/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string trafficSignal(int timer)
    {
        if (timer == 0)
            return "Green";
        else if (timer == 30)
            return "Orange";
        else if (timer > 30 && timer <= 90)
            return "Red";
        return "Invalid";
    }
};

int main()
{
    Solution obj;
    int timer;

    cout << "Enter timer value: ";
    cin >> timer;

    string result = obj.trafficSignal(timer);

    cout << "Traffic Signal: " << result << endl;

    return 0;
}