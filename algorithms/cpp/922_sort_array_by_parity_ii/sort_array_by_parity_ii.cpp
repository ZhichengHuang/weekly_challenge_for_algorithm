class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int sizeA = A.size();
        for(int even=0, odd=1; even<sizeA; even += 2)
        {
            if(A[even]%2 == 1)
            {
                while(A[odd]%2 == 1)
                    odd += 2;
                swap(A[odd],A[even]);
            }
        }
        return A;
    }
};