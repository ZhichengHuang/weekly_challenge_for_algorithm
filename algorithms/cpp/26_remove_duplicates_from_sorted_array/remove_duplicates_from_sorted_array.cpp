class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=0)
        {
            return 0;
        }
        int p=0;
        int q=1;
        while(q<nums.size())
        {
            if (nums[p] != nums[q])
            {
                if (q-p>1)
                {
                    nums[p + 1] = nums[q];
                }
                p++;
            }
            q++;
        }
        return p+1;

    }
};