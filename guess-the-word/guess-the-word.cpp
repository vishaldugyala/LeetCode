/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    int numOfMatches(string a, string b)
    {
        int count = 0;
        
        for(int i=0;i<a.size();i=i+1)
            if(a[i] == b[i])
                count += 1;
        
        return count;
    }
    void findSecretWord(vector<string>& wordlist, Master& master) {
        
        if(wordlist.size()<=10)
        {
            for(string s:wordlist)
            {
                master.guess(s);
            }
        }
        else
        {
            int index = rand()%(wordlist.size());
            
            int num_match = master.guess(wordlist[index]);
            
            vector<string> dummy1 = wordlist;
            
            while(dummy1.size()>1)
            {
                vector<string> dummy2;
                for(auto s:dummy1)
                {
                    if(numOfMatches(dummy1[index],s) == num_match)
                        dummy2.push_back(s);
                }
                
                 index = rand()%(dummy2.size());
               // cout<<index<<endl;
                 num_match = master.guess(dummy2[index]);
                
                dummy1 = dummy2;
            }
            
        }
        
        return;
    }
};