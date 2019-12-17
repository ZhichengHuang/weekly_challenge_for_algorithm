class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        map<char, string> m={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        int size = digits.size();
        queue<string> que;

        for (int j=0;j<m[digits[0]].size();j++)
        {
            string str;
            str.push_back(m[digits[0]][j]);
            que.push(str);
        }
        string s;
        for (int i=1;i<size;i++)
        {
            int length = que.size();
            while(length--)
            {
                for(int j=0;j<m[digits[i]].size();j++)
                {
                    s=que.front();
                    s =s +m[digits[i]][j];
                    que.push(s);
                }
                que.pop();
            }
        }
        while(!que.empty())
        {
            res.push_back(que.front());
            que.pop();
        }
        return res;
    }
};