class Solution {
public:
    string reverseVowels(string s) {
        list<char> vowels;
        set<char> vows;
        vows.insert('a');
        vows.insert('A');
        vows.insert('e');
        vows.insert('E');
        vows.insert('i');
        vows.insert('I');
        vows.insert('o');
        vows.insert('O');
        vows.insert('u');
        vows.insert('U');

        string result;
        for(int i=0;i<s.size();i++)
        {
            if(vows.find(s[i]) !=vows.end())
            {
                vowels.push_back(s[i]);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(vows.find(s[i]) !=vows.end())
            {
                result.push_back(vowels.back());
                vowels.pop_back();
            }
            else
            {
                result.push_back(s[i]);
            }

        }
        return result;

    }
};