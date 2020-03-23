class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> results;
        results.push_back(0);
        for (int i=0;i<n;i++)
        {
            int add = 1<<i;
            for (int j =results.size()-1;j>=0;j--)
            {
                int tmp = results[j];
                results.push_back(tmp+add);
            }
        }
        return results;
        
    }
};