class Solution {
public:
    int sumOfDigits(int num)
    {
        int sum = 0;
        while(num != 0)
        {
            sum += num%10;
            num = num/10;
        }
        return sum;
    }
    
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> mp;
        
        for(int i=lowLimit;i<=highLimit;i=i+1)
        {
            mp[sumOfDigits(i)] += 1;
        }
        
        int sol = -1;
        for(auto x:mp)
        {
            sol = max(sol, x.second);
        }
        return sol;
    }
};