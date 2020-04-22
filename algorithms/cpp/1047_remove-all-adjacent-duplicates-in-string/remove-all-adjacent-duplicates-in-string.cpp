class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> tmp;
        for(auto ch:S)
        {
            if(tmp.empty())
            {
                tmp.push(ch);
            }
            else
            {
                if (ch==tmp.top())
                {
                   tmp.pop(); 
                   continue;
                }
                
                tmp.push(ch);
                
                    
            }
        }
        string out ="";
        int total = tmp.size();
        for(int i=0;i<total;i++)
        {
            out+=tmp.top();
            tmp.pop();
        }
        reverse(out.begin(),out.end());  
        return out;

    }
};