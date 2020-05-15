class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_1=0;
        for (char c:t)
        {
            sum_1+=c;
        }
        for (char c:s)
        {
            sum_1-=c;
        }
        return char(sum_1);

    }
};