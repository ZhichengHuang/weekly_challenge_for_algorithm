class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back({});
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            int res_size=res.size();
            for(int j=0;j<res_size;j++)
            {
                
                vector<int> tmp=res[j];
                tmp.push_back(nums[i]);
                res.push_back(tmp);
            }
        }
        return res;
        
        
    }
};