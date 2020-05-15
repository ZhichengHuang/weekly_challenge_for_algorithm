class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result=0;
        for (int i=0;i<32;i++)
        {
            result ^= (n & (1 << i)) != 0 ? 1 << (31 - i) : 0;
        }
        return result;
        
    }
};