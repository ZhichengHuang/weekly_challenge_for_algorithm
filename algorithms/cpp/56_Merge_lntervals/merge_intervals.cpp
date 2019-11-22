
bool compare(const vector<int>& lhs, const vector<int>& rhs)
{
    return (lhs[0]==rhs[0])?lhs[1] <rhs[1] :lhs[0]<rhs[0];
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if (intervals.size()<=0) return result;
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=0;i<intervals.size();i++)
        {
            int size = result.size();
            if (size>0 && result[size-1][1] >= intervals[i][0]){
                result[size-1][1] = max(result[size-1][1],intervals[i][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};