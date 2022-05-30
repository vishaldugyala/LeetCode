class Solution {
    public boolean backspaceCompare(String s, String t) {
    
        
        StringBuilder temp1 = new StringBuilder();
        StringBuilder temp2 = new StringBuilder();
        int i=0;
        int j=0;
        
        while(i<=j && j< s.length()){
            if(s.charAt(j)=='#'){
                i = Math.max(0, i-1);
                if(temp1.length() != 0)
                    temp1.deleteCharAt(i);
            }else{
                i += 1;
                temp1.append(s.charAt(j)); 
            }
            j++;
        }
        int len1 =i;
        
        i=0;
        j=0;
        
        while(i<=j && j< t.length()){
            if(t.charAt(j)=='#'){
                i = Math.max(0, i-1);
                if(temp2.length() != 0)
                    temp2.deleteCharAt(i);
            }else{
                i += 1;
                temp2.append(t.charAt(j));
            }
            j++;
        }
        int len2 = i;
        
        if(len1 != len2)
            return false;
        
        for(int k=0;k<len1;k=k+1){
            if(temp1.charAt(k)!=temp2.charAt(k))
                return false;
        }
        return true;
    }
}