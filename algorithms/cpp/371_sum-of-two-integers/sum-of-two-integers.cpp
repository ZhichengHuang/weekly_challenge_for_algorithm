class Solution {
public:
    int getSum(int a, int b) {
        while (b) {
		auto carry = ((unsigned int)(a & b)) << 1;
		a ^= b;
        b = carry;
    }
    return a;
    }
};