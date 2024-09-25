#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define mod 1000000007

bool cmp(vector<int> &interval1, vector<int> &interval2) {
  if (interval1[1] == interval2[1]) {
    return interval1[0] < interval2[0];
  }
  return interval1[1] < interval2[1];
}

int solve(vector<vector<int>> &A) {
  sort(A.begin(), A.end(), cmp);
  int ans = A.size();
  int i = 0, j = 1;
  while (j < A.size()) {
    if (A[j][0] <= A[i][1]) {
      ans--;
    } else {
      i = j;
    }
    j++;
  }
  return ans;
}

int main() {
  vector<vector<int>> A{{1, 4}, {2, 3}, {4, 6}, {8, 9}};
  cout << solve(A) << endl;

  return 0;
}

/*
Complexity:
Time: O(n*logn)
Space: O(1), no additional space
*/