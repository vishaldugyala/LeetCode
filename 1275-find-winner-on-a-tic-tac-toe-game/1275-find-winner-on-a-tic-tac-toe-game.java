class Solution {
    public String tictactoe(int[][] moves) {
        
        int[][] grid = new int[3][3];
        for(int i=0;i<3;i=i+1)
        {
            Arrays.fill(grid[i],10);
        }
        
        for(int i=0;i<moves.length;i=i+1)
        {
            if(i%2 == 0)
                grid[moves[i][0]][moves[i][1]] = 1;
            else
                grid[moves[i][0]][moves[i][1]] = -1;
        }
        
        for(int i=0;i<3;i=i+1)
        {
            int sumV = 0;
            int sumH = 0;
            int sumD = 0;
            int sumAd = 0;
            for(int j=0;j<3;j=j+1){
                sumH += grid[i][j];
                sumV += grid[j][i];
                sumD += grid[j][j];
                sumAd += grid[j][2-j];
            }
            if(sumH == 3 || sumV == 3 || sumD == 3|| sumAd ==3)
                return "A";
            else if(sumH== -3 || sumV == -3|| sumD == -3|| sumAd ==-3)
                return "B";
        }
        for(int i=0;i<3;i=i+1)
        {
            for(int j=0;j<3;j=j+1)
            {
                if(grid[i][j] == 10)
                {
                    return "Pending";
                }
            }
        }
        return "Draw";
    }
}