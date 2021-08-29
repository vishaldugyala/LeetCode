class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int lo = 0;
        int hi =nums.size()-1;
        int mid;
        
        if(nums[0] > target)
            return 0;
        else if(nums[nums.size()-1]<target)
            return nums.size();
            
        while(lo<=hi)
        {
            mid = lo +(hi-lo)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                hi = mid-1; 
            else
                lo = mid+1;
            
            if(mid>0 && nums[mid]>target && nums[mid-1]<target)
                return mid;
        }
        return 0;
    }
};