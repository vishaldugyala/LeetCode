class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector< pair<int,int> > v;
    
    vector<bool> r(rows,false);
    vector<bool> c(cols,false);
    
    for(int i=0;i<rows;i=i+1)
    {
        for(int j=0;j<cols;j=j+1)
        {
            if(matrix[i][j] == 0)
            {
                r[i] = true;
                c[j] = true;
            }
        }
    }
    for(int i=0;i<rows;i=i+1)
    {
        for(int j=0;j<cols;j=j+1)
        {
            if(r[i]==true || c[j]==true)
            matrix[i][j] = 0;
        }
    }
    return;
    }
};