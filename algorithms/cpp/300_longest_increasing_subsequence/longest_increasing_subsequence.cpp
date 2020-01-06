class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        int maxLen = 0;
        vector<int> dp(len,1);

        for(int i=0;i<len;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            maxLen=max(maxLen,dp[i]);
        }
        return maxLen;
        
    }
};