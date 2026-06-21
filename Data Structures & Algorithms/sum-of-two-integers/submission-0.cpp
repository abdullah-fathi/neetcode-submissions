class Solution {
public:
    int getSum(int a, int b) {
        while (b)
        {
          int car = a & b;
          a = a ^ b;
          b = car << 1;
        }
        return a;
    }
};
