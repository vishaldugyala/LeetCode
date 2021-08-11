class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> sol;
        
        int len = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<len;i=i+1)
        {
            int j=i+1;
            int k=len-1;
            int T = 0-nums[i];
          //  cout<<i<<" "<<j<" "<<k<<" "<<T<<endl;
            while(j<k)
            {
              //  cout<<i<<" "<<j<<" "<<k<<" "<<sol.size()<<endl;
                if(nums[j]+nums[k] < T)
                    j=j+1;
                else if(nums[j]+nums[k]>T)
                    k=k-1;
                else
                {
                  //  cout<<"YES"<<endl;
                    vector<int> temp{nums[i],nums[j],nums[k]};
                    sol.push_back(temp);
                  //  if(j<len-1 && nums[j] == nums[j+1])
                   // {
                        while(j<len-1 && nums[j] == nums[j+1])
                        j += 1;
                   // }
                   // else
                        j += 1;
                    
                   // if(k>0 && nums[k-1]==nums[k])
                   // {
                        while(k>0 && nums[k-1]==nums[k])
                        k -= 1;
                   // }
                   // else
                        k -= 1;
                }
                
            }
            while(i<len-1 && nums[i] == nums[i+1])
                i += 1;
        }
      return sol;
    }
};