class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        string sorted_s1 = s1;
        int s1_sum =0;
        
        for(char c:s1)
            s1_sum += (c-'a')*(c-'a');
        
        sort(sorted_s1.begin(),sorted_s1.end());
        for(int i=0;i+s1.size()<=s2.size();i=i+1)
        {
            string temp = s2.substr(i,s1.size());
            int temp_sum = 0;
            
            for(char c:temp)
                temp_sum += (c-'a')*(c-'a');
            
            if(temp_sum ==s1_sum)
            {
                sort(temp.begin(),temp.end());
                if(temp == sorted_s1)
                    return true;
            }
        }
        
        return false;
    }
};