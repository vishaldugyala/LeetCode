class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> sol{0,1,1,2,1};
        
        if(num<5)
        {
            sol.resize(num+1);
            return sol;
        }
        int count = 3;
        sol.resize(num+1);
        for(int i=5;i<=num;i=i+1)
        {
            if(pow(2,count) == i)
            {
                sol[i] = 1;   
                count += 1;
            }
            else
                sol[i] = 1 + sol[i-pow(2,count-1)];
        }
        return sol;
    }
};