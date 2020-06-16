class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n==0)
        {
            return 1;
        }
        int first = 10,second =9*9;
        int size = n>10?10:n;
        for(int i=2;i<=size;i++)
        {
            first +=second;
            second *=10-i;
        }
        return first;

    }
};