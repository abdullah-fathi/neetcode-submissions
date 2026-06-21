class Solution {
public:
    int search(vector<int>& v, int t) {
        int n = v.size();
        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (v[m] == t)
            {
                return m;
            }
            else if (v[m] < t)
            {
                l = m + 1;
            }
            else 
            {
                r = m - 1;
            }
        }
        return -1;
    }
};
