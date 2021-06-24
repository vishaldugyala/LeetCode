class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        vector<int> solution;
        for(int i=0;i<nums.size();i=i+1)
        {
            if(hashmap.count(nums[i]))
            {
                solution.push_back(i);
                solution.push_back(hashmap[nums[i]]);
            }
            else
            {
                hashmap.insert(make_pair(target-nums[i],i));
            }
        }
        return solution;
    }
};