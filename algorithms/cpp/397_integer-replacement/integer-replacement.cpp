class Solution {
public:
    int integerReplacement(int n) {
       int ans = 0;
        size_t m = n;
        while (1 != m) {
            if (1 == (m & 1)) {
                if (m==3) --m; //special case
                else m = (m&0b11^0b01) ? m + 1 : m - 1;
            }
            else m >>= 1;
            ++ans;
        }
    return ans;

    }
};