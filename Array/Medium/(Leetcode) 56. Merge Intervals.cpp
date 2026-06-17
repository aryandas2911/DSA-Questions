// Ques Link: https://leetcode.com/problems/merge-intervals/description/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    for (int i = 0; i < intervals.size(); i++) {
      if (ans.empty() || intervals[i][0] > ans.back()[1]) {
        ans.push_back(intervals[i]);
      } else {
        ans.back()[1] = max(intervals[i][1], ans.back()[1]);
      }
    }
    return ans;
  }
};

int main() {
  Solution sol;

  vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

  vector<vector<int>> result = sol.merge(intervals);

  cout << "Merged intervals:\n";
  for (auto &interval : result) {
    cout << "[" << interval[0] << ", " << interval[1] << "] ";
  }
  cout << endl;

  return 0;
}