// Ques Link: https://leetcode.com/problems/add-binary/description/

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string s = "";

        while (i >= 0 || j >= 0)
        {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            s = char(sum % 2 + '0') + s;
            carry = sum / 2;
        }

        if (carry)
            s = '1' + s;

        return s;
    }
};

int main()
{
    Solution sol;

    string a, b;
    cin >> a >> b;

    cout << sol.addBinary(a, b) << endl;

    return 0;
}
