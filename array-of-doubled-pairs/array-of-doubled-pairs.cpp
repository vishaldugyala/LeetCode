class Solution {
public:
    static bool comp(int a, int b)
    {
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(),comp);
        
        unordered_map<int,int> mp;
        
        for(auto x:arr)
            mp[x] += 1;
        
        for(int i=arr.size()-1;i>-1;i=i-1)
        {
            if(mp[arr[i]]>0)
            {
                if(arr[i]%2 ==0 && mp[arr[i]/2]>0)
                {
                    mp[arr[i]] -= 1;
                    mp[arr[i]/2] -= 1;   
                }else
                {
              //      cout<<i;
                    return false;   
                }
            }
        }
        
        return true;
    }
};