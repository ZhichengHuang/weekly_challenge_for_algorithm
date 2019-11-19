class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=-2147483648;
        int sum=0;
        for(size_t i =0; i<nums.size();i++)
        {
            sum+=nums[i];
            m=max(sum,m);
            if (sum<0){
                sum=0;
            }
            
        }
        return m;
        
    }
};