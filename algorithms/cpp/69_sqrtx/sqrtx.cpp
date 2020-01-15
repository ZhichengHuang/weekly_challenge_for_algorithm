class Solution {
public:
    int mySqrt(int x) {
        if (x<=0) 
        {
            return 0;
        }
        int low = 0;
        int hight = x/2+1;
        while(low<=hight)
        {
            int mid = low+(hight-low)/2;
            long long re= (long long) mid *(long long) mid;
            if (re==x)
            {
                return mid;
            }
            if (re< x)
            {
                low=mid+1;
            }
            else
            {
                hight = mid-1;
            }
        }
        return hight;
    }
};