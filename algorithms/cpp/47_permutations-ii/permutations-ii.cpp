class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> results;
        results.push_back(nums);
        if (nums.size()<2)
        {
            return results;
        }
        int pos = 0;
        while(pos<nums.size()-1)
        {
            int size = results.size();
            for(int i =0;i<size;i++)
            {
                sort(results[i].begin()+pos,results[i].end());
                for(int j = pos+1;j<results[i].size();j++)
                {
                    vector<int> tmp = results[i];
                    if (j>0 && tmp[j]==tmp[j-1])
                    {
                        continue;
                    }
                    int t = tmp[j];
                    tmp[j]=tmp[pos];
                    tmp[pos]=t;
                    results.push_back(tmp);
                }
            }
            pos++;
        }
        return results;
        
    }
};