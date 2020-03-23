class Solution {
public:
    void combinationsumFunction(vector<int>& candidates,int start, int target, vector<int>& solu, vector<vector<int>> & result)
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
        for (int i=start;i<candidates.size();i++)
        {
            if (i>start && candidates[i]==candidates[i-1])
            {
                continue;
            }
            solu.push_back(candidates[i]);
            combinationsumFunction(candidates,i,target-candidates[i],solu,result);
            solu.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        if (candidates.size()<=0)
        {
            return result;
        }
        sort(candidates.begin(),candidates.end());
        vector<int> solu;
        combinationsumFunction(candidates,0,target,solu,result);
        return result;
    }
};