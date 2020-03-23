class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> results{S};
        for (int i = 0;i<S.size();i++)
        {
            int results_size = results.size();
            if (isupper(S[i]))
            {
                for (int j = 0;j<results_size;j++)
                {
                    string tmp = results[j];
                    tmp[i]=tolower(tmp[i]);
                    results.push_back(tmp);
                }
            }
            else if (islower(S[i]))
            {
                for (int j =0;j<results_size;j++)
                {
                    string tmp = results[j];
                    tmp[i]=toupper(tmp[i]);
                    results.push_back(tmp);
                }
            }
        }
        return results;

    }
};