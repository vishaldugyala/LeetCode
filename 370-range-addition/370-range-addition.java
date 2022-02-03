class Solution {
    public int[] getModifiedArray(int length, int[][] updates) {
        int[] sol = new int[length];
        
        for(int i=0;i<updates.length;i=i+1)
        {
            int start = updates[i][0];
            int end = updates[i][1];
            int val = updates[i][2];
            sol[start] += val;
            
            if(length>end+1)
                sol[end+1] -= val;
        }
        
        int running_sum = sol[0];
        
        for(int i=1;i<length;i=i+1)
        {
            int temp = sol[i];
            sol[i] += running_sum;
            running_sum += temp;
        }
        return sol;
    }
}