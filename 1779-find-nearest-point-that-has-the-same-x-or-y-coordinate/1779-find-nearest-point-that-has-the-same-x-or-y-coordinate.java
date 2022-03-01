class Solution {
    public int nearestValidPoint(int x, int y, int[][] points) {
        int solIndex = -1;
        int minDistance = Integer.MAX_VALUE;
        for(int i=0;i<points.length;i=i+1)
        {
            if((x== points[i][0] || y==points[i][1]) && minDistance >       Math.abs(points[i][0]-x)+Math.abs(points[i][1]-y))
            {
                minDistance = Math.abs(points[i][0]-x)+Math.abs(points[i][1]-y);
                solIndex = i;
            }
        }
        return solIndex;
    }
}