// Ques Link: https://leetcode.com/problems/koko-eating-bananas/description/

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int minEatingSpeed(vector<int> &piles, int h) {
    int ans = INT_MAX;
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    while (low <= high) {
      int mid = low + (high - low) / 2;
      long long total = 0;

      for (auto i : piles) {
        total += ceil((double)i / mid);
      }

      if (total <= h) {
        ans = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    return ans;
  }
};

int main() {
  Solution obj;

  vector<int> piles = {3, 6, 7, 11};
  int h = 8;

  cout << "Minimum Eating Speed: " << obj.minEatingSpeed(piles, h) << endl;

  return 0;
}