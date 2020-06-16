class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int total_size = 1<<nums.size();
        for(int i=0;i<total_size;i++)
        {
            vector<int> sub_res;
            int num =i;
            int ids= 0;
            while(num)
            {
                if(num&1)
                {
                    sub_res.push_back(nums[ids]);
                }
                num >>= 1;
                ids++;
            }
            res.push_back(sub_res);
        }
        return res;

    }
};