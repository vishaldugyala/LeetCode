class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int max_difference= 0;
        
        for(int i=1;i<nums.size();i=i+1)
        {
            max_difference = max(nums[i]-nums[i-1],max_difference);
        }
        
        return max_difference;
        
    }
};