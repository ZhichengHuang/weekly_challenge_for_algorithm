class Solution {
public:
    void combinationsum2Function(vector<int>& candidates,int start,int target,vector<int> & solu,vector<vector<int>> & result)
    {
        if (target<0)
        {
            return;
        }
        if (target==0)
        {
            result.push_back(solu);
            return;
        }
        for(int i=start;i<candidates.size();i++)
        {
            int n = candidates[i];
            if (i>start && candidates[i]==candidates[i-1])
            {
                continue;
            }
            solu.push_back(n);
            combinationsum2Function(candidates,i+1,target-n,solu,result);
            solu.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        if (candidates.size()<=0)
        {
            return result;
        }
        sort(candidates.begin(),candidates.end());
        vector<int> solu;
        combinationsum2Function(candidates,0,target,solu,result);
        return result;
        
    }
};