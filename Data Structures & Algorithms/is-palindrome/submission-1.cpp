class Solution
{
   public:
    bool isPalindrome(string s)
    {
        string st;

        for (char ch : s)
        {
            if (isalnum(ch))
            {
                st.push_back(tolower(ch));
            }
        }

        string reversed(st.rbegin(), st.rend());

        if (st == reversed) return true;
        else return false;
    }
};