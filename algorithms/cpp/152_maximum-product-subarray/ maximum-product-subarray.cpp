class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPrev = nums[0],minPrev = nums[0];
        int maxHere = nums[0],minHere = nums[0];
        int maxProd = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            maxHere = max(maxPrev*nums[i],max(minPrev*nums[i],nums[i]));
            minHere = min(maxPrev*nums[i],min(minPrev*nums[i],nums[i]));
            maxProd = max(maxHere,maxProd);
            maxPrev = maxHere;
            minPrev = minHere;
        }

        return maxProd;

    }
};