class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rolling_sum = 0;
        
        for(int i=0;i<nums.size();i=i+1)
        {
            nums[i] += rolling_sum;
            rolling_sum = nums[i];
        }
        if(nums[nums.size()-1] == nums[0])
            return 0;
        
        for(int i=1;i<nums.size();i=i+1)
        {
            if(nums[i-1] == nums[nums.size()-1]-nums[i])
                return i;
        }
        return -1;
    }
};