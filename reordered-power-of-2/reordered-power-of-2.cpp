class Solution {
public:
    bool reorderedPowerOf2(int N) {
        
        vector<int> power(31,0);
        
        for(int i=0;i<31;i=i+1)
        {
            power[i] = pow(2,i);
        }

        string s  = to_string(N);
        sort(s.begin(),s.end());

        for(int i=0;i<31;i=i+1)
        {
            string temp = to_string(power[i]);
            sort(temp.begin(),temp.end());
            if(temp == s)
                return true;
        }
        
        return false;
    }
};