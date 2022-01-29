class Solution {
    public int[] shuffle(int[] nums, int n) {
        
        int[] sol = new int[2*n];
        
        int i=0;
        int j=n;
        
        int count = 0;
        while(i<n)
        {
            sol[count++] = nums[i++];
            sol[count++] = nums[j++];
        }
        return sol;
    }
}