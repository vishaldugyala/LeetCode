class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> sol;
        
        int left =0;
        int right = numbers.size()-1;
        
        while(left<right)
        {
            if(numbers[left] +numbers[right] < target)
                left += 1;
            else if(numbers[left] +numbers[right] > target)
                right -= 1;
            else 
            {
                sol.push_back(left+1);
                sol.push_back(right+1);
                break;
            }
        }
        return sol;
    }
};