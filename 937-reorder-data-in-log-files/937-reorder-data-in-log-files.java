class Solution {
    public String[] reorderLogFiles(String[] logs) {
        
        Arrays.sort(logs,(a,b) -> {
        String[] aSplit = a.split("\\s+",2);
        String[] bSplit = b.split("\\s+",2);
        
        boolean a1 = Character.isDigit(aSplit[1].charAt(0));
        boolean b1 = Character.isDigit(bSplit[1].charAt(0));
            
        if(a1 && b1){
            return 0;
        }
        else if(a1 && !b1)
        {
            return 1;
        }
        else if(!a1 && b1)
        {
            return -1;
        }
        else
        {
            int res = aSplit[1].compareTo(bSplit[1]);
            if(res == 0)
            {
                int res1 = aSplit[0].compareTo(bSplit[0]);
                return res1;
            }
            else{
                return res;
            }
        }
        });
        return logs;
    }
}