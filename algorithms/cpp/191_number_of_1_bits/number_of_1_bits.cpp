class Solution {
public:
    int hammingWeight(uint32_t n) {
        int b=0;
        while( n>0)
        {
            n&=(n-1);
            b++;
        }
        return b;
        
        
    }
};