class Solution {
public:
    int IsPalindrome(const string& s,int lo, int hi)
    {
        int i = lo;
        int j = hi;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i += 1;
                j -= 1;
            }
            else
            {
                return 0;
            }
        }
        
        return 1;
    }
    
    int countSubstrings(string s) {
        
        int sol = 0;
        
        for(int i=0;i<s.size();i=i+1)
        {
            for(int j=i;j<s.size();j=j+1)
            {
                sol += IsPalindrome(s,i,j);    
            }
        }
        
        return sol;
    }
    
};