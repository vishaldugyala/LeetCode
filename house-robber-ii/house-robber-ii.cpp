class Solution {
public:
    int helper(vector<int>& nums) {
        
        int N = nums.size();
        vector<int> dp(nums.size(),0);
        
        for(int i=nums.size()-1;i>-1;i=i-1)
        {
            if(i == N-1)
                dp[i] = nums[i];
            else if(i == N-2)
                dp[i] = max(nums[i],nums[i+1]);
            else if(i == N-3)
                dp[i] = max(nums[i]+nums[i+2],nums[i+1]);
            else
                dp[i] = max(nums[i] + dp[i+2],nums[i+1] + dp[i+3]);
        }
        return dp[0];
    }
    
    int rob(vector<int>& nums) {
                
        int max1,max2;
        int N = nums.size();
        
        if(N == 1)
            return nums[0];
        else if(N==2)
            return max(nums[0],nums[1]);
            
        vector<int> temp1;
        for(int i=0;i<N-1;i=i+1)
        {
            temp1.push_back(nums[i]);
        }
        max1 = helper(temp1);
        
        vector<int> temp2;
        for(int i=1;i<N;i=i+1)
        {
            temp2.push_back(nums[i]);
        }
        max2 = helper(temp2);
        
        return max(max1,max2);
    }
};