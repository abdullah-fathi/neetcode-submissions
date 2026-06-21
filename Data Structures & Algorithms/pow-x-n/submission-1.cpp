class Solution {
public:
    double fp(double a, long long n)
    {
        double ans = 1;
        while (n)
        {
            if (n & 1)
                ans *= a;
            a *= a;
            n >>= 1;
        }
        return ans;
    }

    double myPow(double x, int n)
    {
        long long N = n; 
        if (N < 0)
        {
            x = 1.0 / x;
            N = -N;
        }
        return fp(x, N);
    }
};
