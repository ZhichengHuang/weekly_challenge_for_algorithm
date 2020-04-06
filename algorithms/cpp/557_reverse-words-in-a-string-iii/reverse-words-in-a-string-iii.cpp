class Solution {
public:
    string reverseWords(string s) {
        if (s.size()==0)
        {
            return s;
        }
        int beg=0,end=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] !=' ')
            {
                end++;
            }
            else
            {
                reverse(s.begin()+beg,s.begin()+end);
                beg=end+1;
                end=beg;
            }
        }
        end++;
        reverse(s.begin()+beg,s.begin()+end);
        return s;

    }
};