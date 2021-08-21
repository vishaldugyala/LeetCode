class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<bool> status(9,false);
        
        int count = 0;
        while(count<=1)
        {
            for(int i=0;i<9;i=i+1)
            {
                for(int j=0;j<9;j=j+1)
                {
                    if(count ==0)
                    {
                        if(board[i][j]!='.')
                        {
                        if(status[board[i][j]-'1'])
                        {
                     //       cout<<"1"<<endl;
                     //       cout<<board[i][j]-'1'<<endl;
                            return false;
                        }
                        status[board[i][j]-'1'] = true;
                  //          cout<<i<<" "<<j<<" "<<status[board[i][j]-'1']<<endl;
                        }
                    }
                    else
                    {
                     //   cout<<"YES";
                        if(board[j][i]!='.')
                        {
                        if(status[board[j][i]-'1'])
                        {
                      //      cout<<"2";
                            return false;
                        } 
                        status[board[j][i]-'1'] = true;   
                        }
                      //  cout<<j<<" "<<i<<" "<<board[j][i]<<endl;
                    }
                }
                status.assign(9,false);
            }
            status.assign(9,false);
            count += 1;
        }
         status.assign(9,false);
        
        for(int i=0;i<3;i=i+1)
        {
            for(int j=0;j<3;j=j+1)
            {
                for(int l=0;l<3;l=l+1)
                {
                    for(int m=0;m<3;m=m+1)
                    {
                       if(board[3*i+l][3*j+m]!='.')
                       {
                        if(status[board[3*i+l][3*j+m]-'1'])
                        {
                        //    cout<<"3";
                            return false;
                        }
                        status[board[3*i+l][3*j+m]-'1'] = true;
                       }
                    }
                }
                status.assign(9,false);
            }
        }
        return true;
    }
};