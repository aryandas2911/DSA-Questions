// Ques Link: https://leetcode.com/problems/convert-the-temperature/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin, fahrenheit};
    }
};

int main()
{
    Solution obj;

    double celsius;
    cin >> celsius;

    vector<double> result = obj.convertTemperature(celsius);

    cout << "Kelvin: " << result[0] << endl;
    cout << "Fahrenheit: " << result[1] << endl;

    return 0;
}