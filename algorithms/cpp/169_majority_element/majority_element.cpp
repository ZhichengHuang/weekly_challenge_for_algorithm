class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int most_num = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
            {
                most_num = nums[i];
                count=1;
                continue;
            }
            if (nums[i] != most_num)
            {
                count--;
            }
            else
            {
                count++;
            }
        }
        return most_num;

    }
};