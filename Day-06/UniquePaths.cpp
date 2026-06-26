class Solution {
public:
    //method 1 (with memoization so tc=m*n) sc=m+n 
    int solve(int m ,int n ,int i,int j,vector<vector<int>>&dp)
    {
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>= n) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        int down=solve(m,n,i+1,j,dp);
        int right=solve(m,n,i,j+1,dp);

        return dp[i][j]=down +right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1, vector<int>(n+1,-1));
        return solve(m,n,0,0,dp);
        
    }
};

class Solution {
public:
    //method 2 tc=m*n sc=m*n
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1, vector<int>(n+1));
        dp[0][0]=1;
        for(int i=0;i<m;i++) dp[i][0]=1;
        for(int j=0;j<n;j++) dp[0][j]=1;

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }

        return dp[m-1][n-1];
    }
};