class Solution {
    public int connectSticks(int[] sticks) {
        
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        
        int sol = 0;
        
        for(int i=0;i<sticks.length;i=i+1)
        {
            pq.add(sticks[i]);
        }
        
        while(pq.size() >1)
        {
            Integer temp1 = pq.poll();
            Integer temp2 = pq.poll();
            
            sol += temp1+temp2;
            pq.add(temp1+temp2);
        }
        return sol;
    }
}