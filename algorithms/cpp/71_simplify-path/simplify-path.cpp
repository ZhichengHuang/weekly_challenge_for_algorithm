class Solution {
public:
    vector<string> &split(const string &s, char delim, vector<string> &elems) {
        stringstream ss(s);
        string item;
        while (getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }
    vector<string> split(const string &s, char delim) {
        vector<string> elems;
        split(s, delim, elems);
        return elems;
    }
    string simplifyPath(string path) {
        string result;
        vector<string> elems = split(path, '/'); 
    
        int ignor = 0;
        for(int i=elems.size()-1; i>=0; i--) {
            
            if (elems[i]=="" || elems[i]=="." ){
                continue;
            }
            if (elems[i]==".."){
                ignor++;
                continue;
            }
            if (ignor>0){
                ignor--;
                continue;
            }
            if (result.size()==0){
                result = "/" + elems[i];
            }else{ 
                result = "/" + elems[i] + result;
            }
        }

        return  result.size() ? result : "/";
        
    }
};