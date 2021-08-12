class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mp;
        
        for(auto s:strs)
        {
            string temp=s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }
        
        unordered_map<string,vector<string>>::iterator it;
        vector<vector<string>> sol;
        
        for(it=mp.begin();it!=mp.end();it++)
            sol.push_back(it->second);
            
        return sol;
    }
};