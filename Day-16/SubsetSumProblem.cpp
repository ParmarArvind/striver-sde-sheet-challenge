class Solution {
  public:
    int dp[201][10001];
    bool solve(vector<int>&arr, int sum ,int i)
    {
        if(sum==0) return true;
        if(i>=arr.size() || sum<0) return false;
        if(dp[i][sum]!= -1 ) return dp[i][sum];
        
        bool take=solve(arr, sum-arr[i] ,i+1);
        bool skip=solve(arr, sum ,i+1);
        
        return dp[i][sum]= take || skip;
    }
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        memset(dp ,-1, sizeof(dp));
        return solve(arr,sum,0);
    }
};