class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer,Integer> mp = new HashMap<Integer,Integer>();
        
        for(int i=0;i<nums.length;i=i+1){
            if(mp.containsKey(target-nums[i])){
                return new int[]{mp.get(target-nums[i]),i};
            }else{
                mp.put(nums[i],i);
            }
        }
        return null;
    }
}