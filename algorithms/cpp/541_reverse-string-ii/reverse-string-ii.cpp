class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0;i<s.size();i=i+2*k)
        {
            int begin = i;
            int end = i+k-1>s.size()-1? s.size()-1:i+k-1;
            while(begin<end)
            {
                char tmp = s[begin];
                s[begin++]=s[end];
                s[end--]=tmp;
            }
        }
        return s;

    }
};