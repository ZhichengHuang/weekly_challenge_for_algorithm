class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int>> results;
        if (nums.size() ==0 ||nums.size()==1 || nums.size()==2){
            return results;
        } 
        sort(nums.begin(),nums.end());
        
        int n = nums.size();

        for(int i=0;i<n-2;i++)
        {
            if (i>0 && nums[i-1]==nums[i]) continue;
            int a = nums[i];
            int low = i+1;
            int high = n-1;
            while(low<high){
                int b = nums[low];
                int c = nums[high];
                if (a+b+c==0)
                {
                    vector<int> tmp;
                    tmp.push_back(a);
                    tmp.push_back(b);
                    tmp.push_back(c);
                    results.push_back(tmp);
                    while(low<n-1 && nums[low]==nums[low+1]) low++; 
                    while(high>0 && nums[high]==nums[high-1]) high--; 
                    low++;
                    high--;
                }
                else if (a+b+c>0)
                {
                    while(high>0 && nums[high]==nums[high-1]) high--;
                    high--;
                }
                else{
                    while(low<n-1 && nums[low]==nums[low+1]) low++;
                    low++;
                }
            }
        }
        return results;
    }
};