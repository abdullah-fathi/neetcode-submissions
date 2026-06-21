class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        bitset<32> bs(n);          
        string s = bs.to_string(); 
        reverse(s.begin(), s.end());
        bitset<32> rev(s);        
        return rev.to_ulong();     
    }
};
