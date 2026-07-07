class Solution {
  public:
    vector<vector<int>>directions{{1,0} ,{0,-1} ,{0,1} , {-1 ,0} };
    int n;
    void solve(vector<vector<int>>&maze,vector<string>&result,string &curr,int i,int j)
    {
        if(i<0 || j<0 || i>n-1 || j>n-1 || maze[i][j] ==0) return ;
        if(i==n-1 && j==n-1 ) {
            result.push_back(curr);
            return;
        }
        int prev=maze[i][j];
        maze[i][j]=0;
        for(auto &dir :directions)
        {
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            
            if(dir[0]==0)
            {
                if(dir[1]==1) curr.push_back('R');
                else curr.push_back('L');
            }else if(dir[1]==0) 
            {
                if(dir[0]==1) curr.push_back('D');
                else curr.push_back('U');
            }
            solve(maze,result,curr,new_i,new_j);
            curr.pop_back();
        }
         maze[i][j]=prev;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        n=maze.size();
        vector<string>result;
        string curr;
        solve(maze,result,curr,0,0);
        return result;
    }
};