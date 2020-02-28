class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index_a = m-1;
        int index_b = n-1;
        for (int i=m+n-1;i>=0;i--)
        {
            if (index_a>=0 && index_b<0)
            {
                break;
            }
            if (index_a<0 && index_b>=0)
            {
                nums1[i]=nums2[index_b];
                index_b--;
            }
            if (index_a>=0 && index_b>=0)
            {
                if (nums1[index_a]> nums2[index_b])
                {
                    nums1[i]=nums1[index_a];
                    index_a--;
                }
                else
                {
                    nums1[i]=nums2[index_b];
                    index_b--;
                }
            }
        }

    }
};