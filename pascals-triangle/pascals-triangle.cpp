class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    vector< vector<int> >sol;
        
    for(int i=0;i<numRows;i=i+1)
    {
        vector<int> temp;
        for(int j=0;j<i+1;j=j+1)
        {
            if(j==0 || j==i )
            {
                temp.push_back(1);
            }else
            {
                temp.push_back(sol[i-1][j-1] + sol[i-1][j]);
            }
        }
        sol.push_back(temp);
    }
    return sol;
    }
};