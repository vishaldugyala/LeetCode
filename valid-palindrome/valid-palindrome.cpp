class Solution {
public:
    bool isPalindrome(string s) {
        
        int start = 0;
        int end = s.size()-1;
        
        while(start<end)
        {
            while(start<end && isalnum(s[start])==0)
                start++;
                
            while(start<end && isalnum(s[end])==0)
                end--;
                
            
            if(tolower(s[start])!=tolower(s[end]))
                return false;
            
            start += 1;
            end -= 1;
        }
        return true;
    }
};