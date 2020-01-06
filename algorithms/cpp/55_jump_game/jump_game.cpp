class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=0)
        {
            return false;
        }
        int p=0;
        for(int i=0;i<=p&&i<nums.size();i++)
        {
            if(p<nums[i]+i)
            {
                p=nums[i]+i;
            }
            if(p>=nums.size()-1)
            {
                return true;
            }
        }
        return false;
        
    }
};