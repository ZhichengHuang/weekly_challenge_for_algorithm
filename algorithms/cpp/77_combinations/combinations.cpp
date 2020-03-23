class Solution {
public:
    void CombineFunction(int n,int k,vector<int>& solu,vector<vector<int>>& result)
    {
        if(k==0)
        {
            vector<int> v = solu;
            sort(v.begin(),v.end());
            result.push_back(v);
            return;
        }
        for(int i=n;i>0;i--)
        {
            solu.push_back(i);
            CombineFunction(i-1,k-1,solu,result);
            solu.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> solu;
        CombineFunction(n,k,solu,result);
        return result;
        
    }
};