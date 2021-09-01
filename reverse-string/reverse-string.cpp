class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0,j=s.size()-1;i<j;i=i+1,j=j-1)
        {
            swap(s[i],s[j]);
        }
        return;
    }
};