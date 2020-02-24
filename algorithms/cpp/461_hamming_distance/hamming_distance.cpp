class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x ^ y;
        int ans = 0;
        while (a != 0) {
            ans++;
            a &= a - 1;
        }
        return ans;
    }
};