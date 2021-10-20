class Solution {
public:
    int minPartitions(string n) {
        int sol = 0;
        
        for(char c:n)
        {
            sol = max(sol,c-'0');
        }
        
        return sol;
    }
};