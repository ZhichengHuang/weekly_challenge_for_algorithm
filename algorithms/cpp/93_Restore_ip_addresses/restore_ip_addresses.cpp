class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        string ip;
        restoreIP(s,0,0,ip,result);
        return result;
        
    }
    void restoreIP(string &s,int start, int partNum,string ip,vector<string>& result)
    {
        int len = s.size();
        if (len-start<4-partNum || len-start > (4-partNum)*3)
        {
            return;
        }
        if (partNum == 4 && start == len)
        {
            ip.erase(ip.end()-1, ip.end());
            result.push_back(ip);
            return;
        }
        int num = 0;
        for (int i=start;i<start+3;i++)
        {
            num = num*10+s[i]-'0';
            if (num<256)
            {
                ip+=s[i];
                restoreIP(s,i+1,partNum+1,ip+".",result);
            }
            if(num==0)
            {
                break;
            }
        }
    }
};