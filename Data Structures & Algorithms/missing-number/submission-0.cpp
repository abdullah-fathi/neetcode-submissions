class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0, mis = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            ans ^= i;
        }
        for (auto i : nums)
        {
            mis ^= i;
        }
        return (ans ^ mis);
    }
};
