class Solution {
public:
    bool checkOrder(string a, string b)
    {
        for(int i=0;i<a.size()&&i<b.size();i=i+1)
        {
            if(mp[a[i]]<mp[b[i]])
                return false;
            else if(mp[a[i]]>mp[b[i]])
                return true;
        }
        return (a.size()>b.size());
    }
    map<char,int> mp;
    
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i=0;i<order.size();i=i+1)
            mp[order[i]] = i;
        
        for(int i=0;i<words.size();i=i+1)
        {
            for(int j=i+1;j<words.size();j=j+1)
            {
                if(checkOrder(words[i],words[j]))
                    return false;
            }
        }
        
        return true;
    }
};