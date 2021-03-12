class Solution {
public:
    bool isPalindrome(int x) {
        
          
    if(x<0)
    return false;
    
    int sol = 0;
    int input = x;
  while(x!=0)
    {
        int temp = x%10;
        
        long long comp = (long long)sol*10 + temp;
//        cout<<comp<<endl;
        
        if(comp>INT_MAX || comp <INT_MIN)
        {
            return false;
        }
        sol *= 10;
        sol += temp;
    //    cout<<sol<<" "<<temp<<endl;
        x /= 10;
    }
    return (sol==input);
        
    }
};