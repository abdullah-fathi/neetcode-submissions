class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int l = 0, r = v.size() - 1; 
        vector<pair<int, int>> ans;
        for (int i = 0; i < v.size(); i++) {
            ans.push_back({v[i], i + 1});
        }
        sort(ans.begin(), ans.end());
        while (l < r) {
            int sum = ans[l].first + ans[r].first;
            if (sum == t) {
                return {ans[l].second, ans[r].second};
            } else if (sum < t) {
                l++;
            } else {
                r--;
            }
        }
        return {-1, -1};
    }
};
