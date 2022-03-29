class Solution {
    public int brokenCalc(int startValue, int target) {
        
        int temp = target;
        int sol =0;
        while(temp!=startValue)
        {
            if(temp < startValue)
            {
                sol += startValue-temp;
                break;
            }
            if(temp%2==1 || temp< startValue)
                temp = temp+1;
            else
                temp = temp/2;
            
            sol += 1;
        }
        return sol;
    }
}