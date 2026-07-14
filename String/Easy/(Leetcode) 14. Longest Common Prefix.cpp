// Ques Link: https://leetcode.com/problems/longest-common-prefix/description/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        int first_size = first.length();
        int last_size = last.length();

        for (int i = 0; i < min(first_size, last_size); i++) {
            if (first[i] == last[i]) {
                result += first[i];
            } else {
                break;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: "
         << sol.longestCommonPrefix(strs) << endl;

    return 0;
}