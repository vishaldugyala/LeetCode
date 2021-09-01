class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numZeros = 0;
        
        int i=0;
        while(i<nums.size())
        {
            if(nums[i] == 0)
                numZeros += 1;
            
            i += 1;
        }
        
        int j = 0;
        
        for(int i=0,j=0;i<nums.size();i=i+1,j=j+1)
        {
            while(j<nums.size() && nums[j]==0)
                j += 1;
            
            if(j == nums.size())
                break;
            swap(nums[i],nums[j]);
        }
        
        for(int i= nums.size()-numZeros;i<nums.size();i=i+1)
        {
            nums[i] = 0;
        }
    }
};