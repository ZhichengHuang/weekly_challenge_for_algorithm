class Solution {
public:
    void reverseString(vector<char>& s) {
        int total_num = s.size();
        for(int i=0;i<total_num/2;i++)
        {
            char ch = s[i];
            s[i]=s[total_num-i-1];
            s[total_num-i-1]=ch;
        }

    }
};