class Solution {
public:
    string reverseWords(string s) {
        
        string sol = "";
        int i = s.size()-1;
        while(i>-1)
        {
            int count = 0;
            while(i>-1 && s[i]==' ')
            {
                i = i-1;
            }

            while(i>-1 && s[i]!=' ')
            {
                count += 1;
                i = i-1;
              //  cout<<count<<endl;
            }
          //  cout<<endl;
            sol += s.substr(i+1,count);
            sol += " ";
            while(i>-1 && s[i]==' ')
            {
                i = i-1;
            }
        }
        return sol.substr(0,sol.size()-1);
    }
};