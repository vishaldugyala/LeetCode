class Solution {
    public int maxCoins(int[] piles) {
        
        Arrays.sort(piles);
        
        int len = piles.length;
        int sol = 0;
        
        int n = len/3;
        
        int count = 0;
        
        for(int i=len-2;i>-1;i=i-2){
            sol += piles[i];
            count += 1;
            if(count == n)
                break;
        }
        return sol;
    }
}