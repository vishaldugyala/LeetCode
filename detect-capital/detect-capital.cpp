class Solution {
public:
    bool detectCapitalUse(string word) {
       
        map<int,int> mp;
        
        for(auto c:word)
        {
            if(isupper(c))
                mp[1] += 1;
            else if(islower(c))
                mp[0] += 1;
        }
        
        if(mp[1] == word.size() || mp[0] == word.size() || isupper(word[0]) && mp[0] == word.size()-1)
            return true;
        
        return false;
        
    }
};