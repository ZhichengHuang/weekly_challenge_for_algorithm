class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first = isupper(word[0]);
        bool all_upper = true, all_lower = true;
        for(int i=1;i<word.size();i++)
        {
            if(isupper(word[i]))
            {
                all_lower=false;
            }
            else
            {
                all_upper=false;
            }
        }
        return all_lower || first&&all_upper;

    }
};