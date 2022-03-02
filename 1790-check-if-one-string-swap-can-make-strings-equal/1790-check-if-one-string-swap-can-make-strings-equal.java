class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        
        int count = 0;
        int diff = 0;
        char s11 = '\0';
        char s12 = '\0';
        char s21 = '\0';
        char s22 = '\0';
        for(int i=0;i<s1.length();i=i+1)
        {
            if(s1.charAt(i)!=s2.charAt(i))
            {
                if(count>0)
                {
                    s11 = s1.charAt(i);
                    s21 = s2.charAt(i);
                }
                else
                {
                    s12 = s1.charAt(i);
                    s22 = s2.charAt(i);
                }
                
                count += 1;
                diff += s1.charAt(i)-s2.charAt(i);
            }
        }
        if((count == 2||count==0) && diff ==0 && s11==s22 && s21==s12)
            return true;
        
        return false;
    }
}