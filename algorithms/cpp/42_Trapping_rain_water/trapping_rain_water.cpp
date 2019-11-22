class Solution {
public:
    int trap(vector<int>& height) {
        int result=0;
        
        int max_value = 0;
        int max_idx = 0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>max_value)
            {
                max_value=height[i];
                max_idx = i;
            }

        }
        //from the left to the highest position
        int pre_max_value=0;
        for(int i =0;i<max_idx;i++)
        {
            if(height[i]>pre_max_value)
            {
                pre_max_value=height[i];
            }
            result+=(pre_max_value-height[i]);
        }
        //from the right to the highest position
        pre_max_value = 0;
        for (int i=height.size()-1;i>max_idx;i--)
        {
            if (height[i]>pre_max_value)
            {
                pre_max_value=height[i];
            }
            result+=(pre_max_value-height[i]);
        }
        return result;
        
    }
};