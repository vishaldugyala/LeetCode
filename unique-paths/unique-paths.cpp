class Solution {
public:
    int uniquePaths(int m, int n) {
        int rows = m;
        int cols = n;
        int A[m][n];
        for(int i=0;i<n;i=i+1)
        {
            A[0][i] = 1;
        }
        for(int i=0;i<m;i=i+1)
        {
            A[i][0] = 1;
        }
        for(int i=1;i<m;i=i+1)
        {
            for(int j=1;j<n;j=j+1)
            {
                A[i][j] = A[i-1][j]+A[i][j-1];
            }
        }
        return A[m-1][n-1];
    }
};