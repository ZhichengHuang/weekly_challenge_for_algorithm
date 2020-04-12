
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp.at(0)=1;
        int p_2=0,p_3=0,p_5=0;
        for(int i=1;i<n;i++)
        {
            dp[i]=min(min(2*dp[p_2],3*dp[p_3]),5*dp[p_5]);
            if(dp[i]==2*dp[p_2])
            {
                ++p_2;
            }
            if(dp[i]==3*dp[p_3])
            {
                ++p_3;
            }
            if(dp[i]==5*dp[p_5])
            {
                ++p_5;
            }
        }
        return dp[n-1];

    }
};