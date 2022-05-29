class Solution {
    public int lastStoneWeight(int[] stones) {
     
        PriorityQueue<Integer> maxHeap  = new PriorityQueue<Integer>(Collections.reverseOrder());
        
        for(int i=0;i<stones.length;i=i+1){
            maxHeap.add(stones[i]);
        }
        
        while(maxHeap.size() > 1){
            int temp1 = maxHeap.poll();
            int temp2 = maxHeap.poll();
            if(temp1 != temp2)
                maxHeap.add(temp1-temp2);
        }
        if(maxHeap.size() == 0)
            return 0;
        return maxHeap.poll();
    }
}