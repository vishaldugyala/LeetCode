class Solution {
public:
    vector<int> arr;
    map<int,vector<int>> mp;
    
    Solution(vector<int>& nums) {
        
        for(auto x:nums)
            arr.push_back(x);
        
        for(int i=0;i<arr.size();i=i+1)
        {
            if( mp.find(arr[i]) == mp.end())
            {
                vector<int> temp;
                temp.push_back(i);
                mp[arr[i]] = temp;
            }
            else{
                mp[arr[i]].push_back(i);   
            }
        }
    }
    
    int pick(int target) {
        int index = rand()%(mp[target].size());
      //  cout<<index<<endl;
        return mp[target][index];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */