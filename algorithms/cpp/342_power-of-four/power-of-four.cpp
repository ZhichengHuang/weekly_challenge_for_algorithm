class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num<=0)
            return false;
        if ((num&(num-1))!=0)
        {
            return false;
        }
        if ((num & 0b01010101010101010101010101010101) != 0)
        {
            return true;
        }
        return false;

    }
};