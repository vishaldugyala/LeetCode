class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int sol = 0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j = nums.size()-1;
        
        while(i<j)
        {
            if(nums[i]+nums[j]<k)
                i += 1;
            else if(nums[i]+nums[j]>k)
                j -= 1;
            else
            {
                sol+= 1;
                i += 1;
                j -= 1;
            }
        }
        
        return sol;
    }
};