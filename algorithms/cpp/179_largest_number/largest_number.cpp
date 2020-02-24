class Solution {
public:
    static bool comp (string& s1, string& s2) 
    { 
        return s1+s2 > s2+s1; 
    }
    string largestNumber(vector<int>& nums) {
            vector<string> v;
            for (int i=0; i<nums.size(); i++) {
                v.push_back(to_string(nums[i]));
            }

            //sort the string
            sort(v.begin(), v.end(), comp);

            //generate the result
            string result;
            for(int i=0; i<v.size(); i++ ){
                result+=v[i];
            }

            //special case: start with zero (e.g. [0, 0])
            if (result[0]=='0') return "0";

            return result;
    }
};