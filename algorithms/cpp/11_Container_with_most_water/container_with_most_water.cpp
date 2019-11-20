class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int area;
        int left=0;
        int right =height.size()-1;
        while(left<right)
        {
            area = (right - left) * ( height[left] < height[right] ? height[left] : height[right]);
            max_area=area>max_area? area:max_area;
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_area;
        
    }
};