class Solution {
public:
    string toHex(int num) {
        if(num==0)
        {
            return "0";
        }
        unsigned int tmp=num;
        string res;
        for(;tmp>0;tmp/=16)
        {
            int n = tmp%16;
            char c;
            if(n<10)
                c = n+'0';
            else
                c = 'a'+n-10;
            res = c+res;
        }
        return res;

    }
};