class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> sol;
        int first = -1;
        int second = -1;
        
        
        if(intervals.size()==0)
        {
            sol.push_back(newInterval);
            return sol;
        }        
        int i=0;
        
        for(i=0;i<intervals.size();i=i+1)
        {
            if(intervals[i][1]<newInterval[0])
                sol.push_back(intervals[i]);
            else
                break;
        }
        
        if(i==intervals.size())
        {
            sol.push_back(newInterval);
            return sol;
        }
        
        vector<int> temp;
        if(intervals[i][0]>newInterval[0])
        {
            temp.push_back(newInterval[0]);
        }
        else
        {
            temp.push_back(intervals[i][0]);
        }
        
        while(i<intervals.size() && intervals[i][0]<=newInterval[1])
        {
            i=i+1;
        }
        
        if(i>0)
        {
            temp.push_back(max(intervals[i-1][1],newInterval[1]));
            sol.push_back(temp);            
        }
        else
            sol.push_back(newInterval);
        
        for(;i<intervals.size();i=i+1)
            sol.push_back(intervals[i]);
        
        return sol;
    }
};