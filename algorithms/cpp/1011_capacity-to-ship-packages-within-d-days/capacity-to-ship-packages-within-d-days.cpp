class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int left= *max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        int mid;
        vector<int> res;
        while(left<=right)
        {
            mid=int((left+right)/2);
            int temp=0;
            int day=0;
            for (int i=0;i<weights.size();i++){
            temp += weights[i];
            if (temp>mid){ 
                day++;
                temp=weights[i];
            }
            }
            day++;
            if (day>D){
                left=mid+1;
            }
            if (day<=D)
            {
                right=mid-1;
                res.push_back(mid);
            }
        }

        return *min_element(res.begin(),res.end());
        

    }
};