// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo=1;
        int hi=n;
        int mid= lo +(hi-lo)/2;
        
        while(lo<hi)
        {
            if(!isBadVersion(mid)){
                lo = mid+1;
            }else{
                hi = mid;
            }
            mid = lo +(hi-lo)/2;
        }
        return mid;
    }
};