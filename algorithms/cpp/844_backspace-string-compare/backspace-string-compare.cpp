class Solution {
public:
    void removeItem(string &s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                int backSteps = i>0?2:1;
                s.erase(i-backSteps+1,backSteps);
                i-=backSteps;
            }
        }
    
    }
    bool backspaceCompare(string S, string T) {
        removeItem(S);
        removeItem(T);
        return S==T;
        
    }
};