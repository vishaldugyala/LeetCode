class Solution {
    public int findUnsortedSubarray(int[] nums) {
        
        int[] sortedNums = Arrays.copyOf(nums, nums.length);
        Arrays.sort(sortedNums);
        
        int beginIndex = -1;
        int endIndex = -1;
        for(int i=0;i<nums.length;i=i+1){
            if(sortedNums[i]!= nums[i]){
                if(beginIndex == -1)
                    beginIndex = i;
                endIndex = i;
            }
        }
        if(beginIndex==-1)
            return 0;
        return endIndex-beginIndex + 1;
    }
}