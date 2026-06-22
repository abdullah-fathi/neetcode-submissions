class Solution {
 public:
  int dp[105][105];
  int N, M;
  int go(int i, int j) {
    if (i == N - 1 && j == M - 1) {
      return 1;
    }
    if (i >= N || j >= M) {
      return 0;
    }
    auto& ret = dp[i][j];
    if (~ret) {
      return ret;
    }
    return ret = go(i + 1, j) + go(i, j + 1);
  }
  int uniquePaths(int m, int n) {
    N = m;
    M = n;
    for (int i = 0; i < 105; i++) {
      for (int j = 0; j < 105; j++) {
        dp[i][j] = -1;
      }
    }
    return go(0, 0);
  }
};