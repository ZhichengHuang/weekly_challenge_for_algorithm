class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> tmp;
        for(int i=0;i<arr.size();i++)
        {
            int cnt = 0;
            for(int j=0;j<32;j++)
            {
                if(arr[i]&(1<<j))
                {
                    cnt++;
                }
            }
            tmp.push_back({arr[i],cnt});
        }
        auto comp = [](pair<int,int> pa,pair<int,int> pb){
            return pa.second == pb.second ? pa.first < pb.first : pa.second < pb.second;
        };
        sort(tmp.begin(), tmp.end(), comp);
        vector<int> ans; 
        for(auto pr : tmp){
            ans.push_back(pr.first);
        }
        return ans;
    }
};