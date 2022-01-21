class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size()-1;
        int mid = lo +(hi-lo)/2;
        
        while(lo<hi)
        {
            if(nums[mid]>0)
            {
                hi=mid;
            }else if(nums[mid]<0)
            {
                lo = mid+1;
            }else{
                break;
            }
            mid = lo +(hi-lo)/2;
        }
        vector<int> sol;
        int left = mid-1;
        int right = mid;
        
        while(left>-1 && right<nums.size()){
            if(nums[left]*nums[left]>nums[right]*nums[right])
            {
                sol.push_back(nums[right]*nums[right]);
                right += 1;
            }
            else if(nums[left]*nums[left]<nums[right]*nums[right])
            {
                sol.push_back(nums[left]*nums[left]);
                left -= 1;
            }
            else
            {
                sol.push_back(nums[right]*nums[right]);
                sol.push_back(nums[left]*nums[left]);
                right += 1;
                left -= 1;
            }
        }
        while(left>-1)
        {
            sol.push_back(nums[left]*nums[left]);
            left -= 1;
        }
        while(right<nums.size())
        {
            sol.push_back(nums[right]*nums[right]);
            right += 1;
        }
        return sol;
    }
};