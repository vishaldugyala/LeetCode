class Solution {
    public int subtractProductAndSum(int n) {
        long product = 1;
        long sum = 0;
        
        while(n!=0){
            product *= (n%10);
            sum += (n%10);
            
            n /= 10;
        }
        return (int)(product-sum);
    }
}