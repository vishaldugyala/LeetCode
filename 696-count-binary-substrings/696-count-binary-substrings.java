class Solution {
    public int countBinarySubstrings(String s) {
        
        int groups[] = new int[s.length()];
        groups[0] = 1;
        int i = 1;
        int t=0;
        while(i < s.length())
        {
            if(s.charAt(i-1) != s.charAt(i))
            {
                groups[++t] = 1;
            }else{
                groups[t] += 1;
            }
            i += 1;
        }
        int sol = 0;
        for(int j=1;j<=t;j=j+1)
        {
            sol += Math.min(groups[j-1],groups[j]);
        }
        
        return sol;
    }
}