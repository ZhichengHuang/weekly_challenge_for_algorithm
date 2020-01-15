class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size()==0)
        {
            return 0;
        }
        int low = 0;
        int hight = nums.size()-1;
        while(low<=hight)
        {
            int mid = low+(hight-low)/2;
            if (nums[mid]==target)
            {
                return mid;
            }
            if (target>nums[mid])
            {
                low = mid+1;
            }
            else
            {
                hight = mid-1;
            }
        }
        return low;
        
    }
};