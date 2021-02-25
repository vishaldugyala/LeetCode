class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int sol = 0;
        vector<int> arr = nums;
        int begin = -1;
        int end = -1;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<nums.size();i=i+1)
        {
            if(nums[i]!=arr[i])
            {
                if(begin == -1)
                    begin = i;
                end = i;
            } 
        }
        
        if(begin == -1)
            return 0;
        
        return end-begin+1;
    }
};