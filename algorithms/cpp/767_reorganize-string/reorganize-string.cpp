class Solution {
public:
    string reorganizeString(string S) {
        map<char, int> maps;
      for(auto c : S){
        maps[c]++;
        if(maps[c] > (S.size() + 1) / 2)
          return "";
      }
      priority_queue<pair<int, char>, vector<pair<int, char>>> q;
      for(auto m : maps){
        q.push({m.second, m.first});
      }

      string res = S;
      int i = 0;
      while(!q.empty()){
        char c = q.top().second;
        int cnt = q.top().first;
        q.pop();
        while(cnt--){
          i = i >= S.size() ? 1 : i;
          res[i] = c;
          i = i + 2;
        }
      }

      return res;

    }
};