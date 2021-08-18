class Solution {
public:
    int numSub(string s) {
        
        long long sol = 0;
        
        for(int i=0;i<s.size();i=i+1)
        {
            long long count = 0;
            while(i<s.size() && s[i] == '1')
            {
                count += 1;
                 i += 1;
            }
            sol += (((count%1000000007)*((count+1)%1000000007))/2)%1000000007;
        }
        
        return (int)sol;
    }
};