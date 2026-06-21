class Solution {
public:
    long long reverse(long long x) {
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        string t = "";
        for (auto i : s) {
            if (i == '-') {
                t += i;
            }
        }
        if (t.size() == 1) {

            for (int i = 0; i < s.size() - 1; i++) {
                t += s[i];
            }
        } else if (t.size() == 0) {

            for (int i = 0; i < s.size(); i++) {
                t += s[i];
            }
        }
        long long ans = stoll(t);
        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }
        return ans;
    }
};