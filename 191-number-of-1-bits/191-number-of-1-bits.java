public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int bits = 0;
        int mask = 1;
        
        for(int i=0;i<32;i=i+1){
            if((n & mask) != 0)
            {
                bits += 1;
            }
            mask = mask<<1;
        }
        return bits;
    }
}