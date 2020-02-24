class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < 32; ++i) {
            int one = 0;
            int sum = 0;
            for (int& j : nums) {
                sum |= j;
                one += (j & 1);
                j >>= 1;
            }
            if (sum == 0) break;
            res += (n - one) * one;
        }
        return res;

    }
};