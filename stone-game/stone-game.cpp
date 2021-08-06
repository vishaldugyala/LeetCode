class Solution {
public:
    vector<vector<int>> dp;
    int recurse(vector<int> piles,int i, int j, int size)
    {
        if(i>j)
            return 0;
        
        int parity = (j + i + size) % 2;
        if(dp[i][j] !=0)
            return dp[i][j];
        
        if(parity)
            dp[i][j] = max(recurse(piles,i+1,j,j-i)+piles[i],
                           recurse(piles,i,j-1,j-i)+piles[j]);
        else
            dp[i][j] = min(recurse(piles,i+1,j,j-i)-piles[i]
                           ,recurse(piles,i,j-1,j-i)-piles[j]);
        
        return dp[i][j];
    }
        
    bool stoneGame(vector<int>& piles) {
        int N = piles.size();
        dp.resize(N,vector<int>(N,0));
        
        recurse(piles,0,N-1,N);
        return dp[0][N-1];
    }
};