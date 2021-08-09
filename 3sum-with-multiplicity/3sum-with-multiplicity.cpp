class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        vector<long long> count(101,0);
        
        for(auto x:arr)
            count[x] += 1;
        
        long long sol = 0;
       // cout<<count[0]<<endl;
        for(int i=0;i<101;i=i+1)
        {
            for(int j=i;j<101;j=j+1)
            {
                for(int k=j;k<101;k=k+1)
                {
                    if(count[i]>0 &&count[j]>0 && count[k]>0 && i+j+k == target)
                    {
                        if(i==j && j==k && count[i]>2)
                            sol += ((count[i])*(count[i]-1)*(count[i]-2)/6)%1000000007;
                        else if(i==j && j!=k &&count[i]>1)
                            sol += ((count[i]*(count[i]-1)*count[k])/2)%1000000007;
                        else if(j==k && k!=i &&count[j]>1)
                            sol += (((count[j]*(count[j]-1))*count[i])/2)%1000000007;
                        else if(i==k && k!=j &&count[i]>1)
                            sol += ((count[i]*(count[i]-1)*count[j])/2)%1000000007;
                        else if(i!=j && j!=k && k!=i)
                            sol += (count[i]*count[j]*count[k])%100000007;
                        
                        //cout<<i<<" "<<j<<" "<<k<<" "<<sol<<endl;
                        //cout<<count[i]<<" "<<count[j]<<" "<<count[k]<<endl;
                    }
                }
            }
        }
        return sol%1000000007;
    }
};