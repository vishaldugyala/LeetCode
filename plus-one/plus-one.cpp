class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int N = digits.size();
        int carry =1;
        int temp = 0;  
        
        for(int i=N-1;i>-1;i=i-1)
        {
            temp = carry;
            if(digits[i] + temp >= 10)
                temp = 1;
            else
                temp = 0;
            
            digits[i] = (digits[i] + carry)%10;
            carry = temp;
        }
        
        if(digits[0] == 0 && carry == 1)
            digits.insert(digits.begin(),1);
            
        return digits;
       
    }
};