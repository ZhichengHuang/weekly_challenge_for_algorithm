class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vv;
        vv.push_back(nums);

        if(nums.size()<2)
        {
            return vv;
        }
        
        for(int pos=0;pos<nums.size()-1;pos++)
        {
            int size = vv.size();
            for(int i=0;i<size;i++)
            {
                for (int j=pos+1;j<vv[i].size();j++)
                {
                    vector<int> v=vv[i];
                    int t = v[j];
                    v[j] = v[pos];
                    v[pos]=t;
                    vv.push_back(v);
                }
            }
        }
        return vv;
        
    }
};