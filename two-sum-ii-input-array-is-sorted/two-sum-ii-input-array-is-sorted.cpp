class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0,j=numbers.size()-1;i<j;)
        {
            if(numbers[i] + numbers[j] == target)
                return vector<int>{i+1,j+1};
            else if(numbers[i] + numbers[j] <target)
                i += 1;
            else
                j -= 1;
        }
        return vector<int>{-1,-1};
    }
};