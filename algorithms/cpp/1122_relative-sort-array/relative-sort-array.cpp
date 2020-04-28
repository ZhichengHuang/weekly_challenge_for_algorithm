class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> tmp = vector<int>(1001);
        for(auto i: arr1)
        {
            tmp[i]++;
        }
        int index = 0;
        for(auto j: arr2)
        {
            while(tmp[j]>0)
            {
                arr1[index]=j;
                tmp[j]--;
                index++;
            }
        }
        for(int i=0;i<tmp.size();i++)
        {
            while(tmp[i]>0)
            {
                arr1[index]=i;
                tmp[i]--;
                index++;
            }
        }
        return arr1;

    }
};