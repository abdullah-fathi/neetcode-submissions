class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        vector<int> a, b;
        for (auto i : v) {
            if (i % 2) {
                b.push_back(i);
            } else {
                a.push_back(i);
            }
        }
        vector<int> ans;
        for (auto i : a) {
            ans.push_back(i);
        }
        for (auto i : b) {
            ans.push_back(i);
        }
        return ans;
    }
};