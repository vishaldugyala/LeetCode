class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int totalSum = 0;
        
        for(int x:nums)
            totalSum += x;
        
        return (nums.size()*(nums.size()+1)/2 - totalSum);
        
    }
};