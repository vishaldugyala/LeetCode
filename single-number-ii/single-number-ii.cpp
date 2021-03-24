class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int sol = 0;
        
        for(int i=0;i<32;i=i+1)
        {
            int count1 = 0;
            int count0 = 0;
            for(int j=0;j<nums.size();j=j+1)
            {
                if((nums[j]>>i)&1)
                    count1 += 1;
                else
                    count0 += 1;
            }
            
            if(count1%3)
                sol += 1<<i;
        }
        
        return sol;
    }
};