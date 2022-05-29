class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer,Integer> mp = new HashMap<Integer,Integer>();
        
        int[] sol = new int[2];
        for(int i=0;i<nums.length;i=i+1){
            if(mp.containsKey(target-nums[i])){
                sol[0] = mp.get(target-nums[i]);
                sol[1] = i;
                return sol;
            }else{
                mp.put(nums[i],i);
            }
        }
        return sol;
    }
}