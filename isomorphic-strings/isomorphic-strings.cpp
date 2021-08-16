class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,vector<int>> mp1;
        unordered_map<char,vector<int>> mp2;
        
        for(int i=0;i<s.size();i=i+1)
            mp1[s[i]].push_back(i);
        
        for(int j=0;j<t.size();j=j+1)
            mp2[t[j]].push_back(j);
        
        int count = 0;
        
        for(auto x:mp1)
        {
            for(auto y:mp2)
            {
                if(x.second[0] == y.second[0] && x.second.size() == y.second.size()) 
                {
                    for(int i=0;i<x.second.size();i=i+1)
                    {
                        if(x.second[i] != y.second[i])
                            return false;
                        else
                            count += 1;
                    }
                }
            }
        }
        
        return (count == s.size())? true:false;
        
    }
};