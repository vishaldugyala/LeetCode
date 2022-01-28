class Solution {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        
        Arrays.sort(boxTypes, (a,b) -> b[1]-a[1] );
        
        int sol=0;
        
        for(int i=0;i<boxTypes.length;i=i+1)
        {
            if(truckSize >= 0 && truckSize >= boxTypes[i][0])
            {
                truckSize -= boxTypes[i][0];
                sol += boxTypes[i][0]*boxTypes[i][1];
            }
            else if(truckSize >= 0 && truckSize < boxTypes[i][0])
            {
                sol += truckSize * boxTypes[i][1];
                truckSize = 0;
            }
        }
        
        return sol;
    }
}