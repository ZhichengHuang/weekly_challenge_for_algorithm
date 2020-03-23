class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        for(int i =0;i<=nums.size();i++)
        {
            vector<vector<int>> item = combine(nums,i);
            results.insert(results.end(),item.begin(),item.end());
        }
        return results;
        
    }

    vector<vector<int>> combine(vector<int>& nums, int count)
    {
        vector<vector<int> > result;
        vector<int> solution;
        getCombination(nums, nums.size(), count, solution, result);
        return result;
    }
    void getCombination(vector<int> &v,int n,int k,vector<int> & solution,vector<vector<int>> &result)
    {
        {
            if (k==0){
            //sort to meet LeetCode requirement
            vector<int> v = solution;
            sort(v.begin(), v.end());
            result.push_back(v);
            return;
        }
        for(int i=n; i>0; i--){
            solution.push_back(v[i-1]);
            getCombination(v, i-1, k-1, solution, result);
            solution.pop_back();
            //skip the duplication
            while (i>1 && v[i-1]==v[i-2]) i--;
            }
        }
    }
};