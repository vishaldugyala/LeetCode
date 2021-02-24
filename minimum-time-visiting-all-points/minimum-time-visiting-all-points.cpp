class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int sol = 0;
        int x = points[0][0];
        int y = points[0][1];
        
        for(int i=1;i<points.size();i=i+1)
        {
            if(points[i][0]-points[i-1][0]>0)
            {
               x +=    min( abs(points[i][0]-points[i-1][0]) 
                       ,abs(points[i][1]-points[i-1][1]) );
            }
            else
            {
                x -=    min( abs(points[i][0]-points[i-1][0]) 
                       ,abs(points[i][1]-points[i-1][1]) );
            }
            
            if(points[i][1]-points[i-1][1]>0)
            {
                y +=  min( abs(points[i][0]-points[i-1][0]) 
                       ,abs(points[i][1]-points[i-1][1]) );

            }
            else
            {
                y -=  min( abs(points[i][0]-points[i-1][0]) 
                       ,abs(points[i][1]-points[i-1][1]) );

            }
            
            sol += min( abs(points[i][0]-points[i-1][0]) 
                       ,abs(points[i][1]-points[i-1][1]) ) + 
                    max( abs(points[i][1]-y), abs(points[i][0]-x) );
            
            x = points[i][0];
            y = points[i][1];
            
   //         cout<<x<<" "<<y<<" "<<sol<<endl;
        }
        
        return sol;
    }
};