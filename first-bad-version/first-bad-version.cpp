// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int lo = 1;
        int hi = n;
        int mid;
        
        while(lo<=hi)
        {
            mid = lo + (hi-lo)/2;
            
            if(isBadVersion(mid))
            {
                if(mid == 0 || isBadVersion(mid-1) == false)
                    return mid;
                hi = mid-1;
            }
            else
                lo = mid+1;
        }
        return mid;
    }
};