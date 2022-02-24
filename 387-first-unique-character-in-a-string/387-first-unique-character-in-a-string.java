class Solution {
    public int firstUniqChar(String s) {
        
        int[] array = new int[26];
        
        for(int i=0;i<s.length();i=i+1)
            array[s.charAt(i)-'a'] += 1;
        
        for(int i=0;i<s.length();i=i+1){
            if(array[s.charAt(i)-'a']==1)
                return i;
        }
        return -1;
    }
}