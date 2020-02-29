class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size()<3)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int res = nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++)
        {
            int left = i+1;
            int right = nums.size()-1;
            while(left < right)
            {
                int tmp=nums[i]+nums[left]+nums[right];
                if (abs(tmp-target)<abs(res-target))
                {
                    res=tmp;
                }
                if (tmp==target)
                {
                    return res;
                }
                else if (tmp>target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return res;

    }
};