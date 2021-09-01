class Solution {
public:
    string reverseWords(string s) {
        
        string sol ="";
        
        for(int i=0;i<s.size();i=i+1)
        {
            string temp;
            while(i<s.size() && s[i]!=' ')
            {
                temp += s[i];
                i += 1;
            }
            reverse(temp.begin(),temp.end());
            sol += temp;
            
            if(i!=s.size())
                sol += " ";
        }
        
        return sol;
    }
};