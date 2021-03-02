class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        int total_sum = 0;
        
        for(auto x:arr)
        {
            total_sum += x;
        }
        
        if(total_sum%3)
            return false;
        
        unordered_set<int> s;
        
        int running_sum = 0;
        
        for(int i=0;i<arr.size();i=i+1)
        {
            running_sum += arr[i];
            
            if( i<arr.size()-1 && running_sum%2 == 0 
               && s.find(running_sum/2) != s.end() 
               && running_sum/2 == total_sum/3)
                return true;
            else
                s.insert(running_sum);
        }
        
        return false;
    }
};