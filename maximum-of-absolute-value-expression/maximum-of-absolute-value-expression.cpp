class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
     
        int maxa = INT_MIN;
        int mina = INT_MAX;
        int maxb = INT_MIN;
        int minb = INT_MAX;
        int maxc = INT_MIN;
        int minc = INT_MAX;
        int maxd = INT_MIN;
        int mind = INT_MAX;
        
        for(int i=0;i<arr1.size();i=i+1)
        {
            maxa = max(maxa,arr1[i]+arr2[i]+i);
            mina = min(mina,arr1[i]+arr2[i]+i);
            
            maxb = max(maxb,arr1[i]-arr2[i]+i);
            minb = min(minb,arr1[i]-arr2[i]+i);
            
            maxc = max(maxc,arr1[i]-arr2[i]-i);
            minc = min(minc,arr1[i]-arr2[i]-i);
            
            maxd = max(maxd,arr1[i]+arr2[i]-i);
            mind = min(mind,arr1[i]+arr2[i]-i);
        }
        
        return max(max(maxa-mina,maxb-minb),max(maxc-minc,maxd-mind));
    }
};