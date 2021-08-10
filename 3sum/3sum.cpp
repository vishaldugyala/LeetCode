class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> sol;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i=i+1)
        {
            int j=i+1;
            int k=nums.size()-1;
            int T = 0-nums[i];
          //  cout<<i<<" "<<j<" "<<k<<" "<<T<<endl;
            while(j<k)
            {
                if(nums[j]+nums[k] < T)
                    j=j+1;
                else if(nums[j]+nums[k]>T)
                    k=k-1;
                else
                {
                   // cout<<"YES"<<endl;
                    vector<int> temp{nums[i],nums[j],nums[k]};
                    sol.insert(temp);
                    j=j+1;
                    k=k-1;
                }
            }
        }
        vector<vector<int>> sol_return;
        
        set<vector<int>>::iterator it;
        
        for(it=sol.begin();it!=sol.end();it++)
        {
            vector<int> temp = *it;
            sol_return.push_back(temp);
        }
        
        return sol_return;
    }
};