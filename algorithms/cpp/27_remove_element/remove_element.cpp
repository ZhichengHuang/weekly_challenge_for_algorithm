class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index_begin = 0;
        int index_end = nums.size()-1;
        while(index_begin<=index_end)
        {
            if (nums[index_begin]==val)
            {
                nums[index_begin]=nums[index_end];
                index_end--;

            }
            else
            {
                index_begin++;
            }
        }
        return index_end+1;

    }
};