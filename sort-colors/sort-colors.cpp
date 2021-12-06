class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int red = 0;
        int  blue = 0;
        int white = 0;
        
        for(auto x:nums)
        {
            if(x == 0)
                red += 1;
            else if(x == 1)
                white += 1;
            else if(x == 2)
                blue += 1;
        }
        
        for(int i=0;i<nums.size();i=i+1)
        {
            if(red > 0)
            {
                nums[i] = 0;
                red -= 1;
            }
            else if(white > 0)
            {
                nums[i] = 1;
                white -= 1;
            }
            else
            {
                nums[i] = 2;
                blue -= 1;
            }
        }
        
    }
};