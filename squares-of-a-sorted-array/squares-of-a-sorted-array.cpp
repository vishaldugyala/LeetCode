class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size()-1;
        vector<int> sol;
        
        while(lo<=hi)
        {
            if(abs(nums[lo])<abs(nums[hi]))
            {
                sol.push_back(nums[hi]*nums[hi]);
                hi -= 1;
            }
            else if(abs(nums[lo])>abs(nums[hi]))
            {
                sol.push_back(nums[lo]*nums[lo]);
                lo += 1;
            }
            else
            {   
                if(lo == hi)
                {
                    sol.push_back(nums[lo]*nums[lo]);
                    break;
                }
                sol.push_back(nums[lo]*nums[lo]);
                sol.push_back(nums[hi]*nums[hi]);
                lo += 1;
                hi -= 1;
            }
        }
        
         reverse(sol.begin(),sol.end());
        return sol;
    }
};