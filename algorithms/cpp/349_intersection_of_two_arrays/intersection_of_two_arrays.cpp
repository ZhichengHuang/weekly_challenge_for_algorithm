class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set<int> s;
        vector<int>::iterator i = nums1.begin(), j = nums2.begin();
        while(i != nums1.end() && j != nums2.end()){
            if(*i == *j){
                s.insert(*i);
                i++;
                j++;
            }
            else if(*i < *j){
                i++;
            }
            else{
                j++;
            }
        }
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};