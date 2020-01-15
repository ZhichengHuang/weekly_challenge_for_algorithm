class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()==0)
        {
            return {-1,-1};
        }
        int begin = 0;
        int end = nums.size()-1;
        if(nums[begin]>target || nums[end]<target)
        {
            return {-1,-1};
        }
        while(begin<=end)
        {
            if (nums[begin]==target && nums[end]==target)
            {
                vector<int> ret = {begin,end};
                return ret;
            }
            int mid = (begin+end)/2;
            if (nums[mid]<target)
            {
                begin = mid+1;
            }
            else if (nums[mid]>target)
            {
                end = mid-1;
            }
            else{
                begin = mid;
                end=mid;
                while(begin>=0 && nums[begin]==target)
                {
                    begin--;
                }
                while(end<nums.size() && nums[end]==target)
                {
                    end++;
                }
                vector<int> ret = {begin+1,end-1};
                return ret;
            }
            if(nums[begin]>target || nums[end]<target)
            {
                return {-1,-1};
            }
        }
        return {-1,-1};
        
    }
};