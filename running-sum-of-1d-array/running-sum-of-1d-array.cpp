class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int runningSum = 0;
        for(int i=0;i<nums.size();i=i+1)
        {
            runningSum += nums[i];
            nums[i] = runningSum;
        }
        return nums;
    }
};