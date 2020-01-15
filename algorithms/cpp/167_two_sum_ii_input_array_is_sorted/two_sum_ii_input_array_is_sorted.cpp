class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> out;
        int low=0;
        int hight = numbers.size()-1;
        while(low<hight)
        {
            if(numbers[low]+numbers[hight]==target)
            {
                out.push_back(low+1);
                out.push_back(hight+1);
                return out;
            }
            else
            {
                numbers[low]+numbers[hight]>target? hight--:low++;
            }
        }
        return out;
        
    }
};