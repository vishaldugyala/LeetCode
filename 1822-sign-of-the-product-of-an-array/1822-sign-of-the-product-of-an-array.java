class Solution {
    public int arraySign(int[] nums) {
        
        int product = 1;
        
        for(int x:nums)
        {
            if(x == 0)
                return 0;
            else if(x>0)
                product *= 1;
            else
                product *= -1;
        }
        return product;
    }
}