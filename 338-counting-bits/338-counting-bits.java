class Solution {
    public int[] countBits(int n) {
        
        int[] sol = new int[n+1];
        
        for(int i=0;i<=n;i=i+1){
            sol[i] = getOnes(i);
        }
        return sol;
    }
    public int getOnes(int n)
    {
        int ones = 0;
        for(int i=0;i<32;i=i+1)
        {
            ones += (n&1);
            n = n>>1;
        }
        return ones;
    }
}