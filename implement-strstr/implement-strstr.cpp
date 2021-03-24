class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0)
            return 0;
        
        int i=0;
        int j=0;
        
        while(i<haystack.size())
        {
            if(haystack[i]==needle[j])
            {
                int count = 0;
                for(int k=0;j+k<needle.size() && i+k<haystack.size();k++)
                {
                    if(haystack[i+k]==needle[j+k])
                    {
                        count += 1;
                    }
                    else
                        break;
                }
                if(count == needle.size())
                    return i;
            }
             i += 1;
        }
        
        return -1;
    }
};