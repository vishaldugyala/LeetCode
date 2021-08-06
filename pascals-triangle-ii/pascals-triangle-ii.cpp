class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> sol;
        
        sol.push_back({1});
        sol.push_back({1,1});
        
        for(int i=2;i<rowIndex+1;i=i+1)
        {
            int len = sol[sol.size()-1].size() + 1;
            
            vector<int> temp(len,1);
            
            for(int j=1;j<len-1;j=j+1)
            {
                temp[j] = sol[sol.size()-1][j-1] + sol[sol.size()-1][j];
            }
            sol.push_back(temp);
        }
        
        return sol[rowIndex];
    }
};