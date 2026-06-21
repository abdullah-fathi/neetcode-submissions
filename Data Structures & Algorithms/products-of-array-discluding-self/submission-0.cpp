class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      long long mul = 1;
      int zeroCount = 0;
      for (auto i : nums) {
        if (i == 0) {
          zeroCount++;
          continue;
        }
        mul *= i;
      }
      vector<int> ans;
      for (auto i : nums) {
        if (zeroCount > 1) ans.push_back(0);
        else if (zeroCount == 1) {
          if (i == 0) ans.push_back(mul);
          else ans.push_back(0);
        }
        else ans.push_back(mul / i);
      }
      return ans;
    }
};