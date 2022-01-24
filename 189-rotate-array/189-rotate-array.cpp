class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> sol;
        k = k%nums.size();
        if(k==0)
            return;
        int i=nums.size()-k;
        int count = 0;
        
        while(count<nums.size())
        {
            sol.push_back(nums[i]);
            count += 1;
            i = (i+1)%(nums.size());
        }
        
        nums = sol;
    }
};