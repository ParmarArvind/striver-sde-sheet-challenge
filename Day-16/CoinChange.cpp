class Solution {
public:
    //method 1 TC: O(amount × number_of_coins) , SC= O(amount × number_of_coins)
    int dp[13][10001];
    int solve(vector<int>& coins ,int amount ,int i)
    {
        if(amount==0) return 0;
        if(i>=coins.size() || amount<0) return INT_MAX;

        if(dp[i][amount] != -1) return dp[i][amount];

        int take=INT_MAX;
        if(amount - coins[i] >= 0) {
            int temp=solve(coins, amount- coins[i],i);
            if(temp!=INT_MAX) take = 1+temp;
            else take=INT_MAX;
        }
        int skip=solve(coins,amount,i+1);

        return dp[i][amount]=min(take,skip);
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1, sizeof(dp));
        int ans= solve(coins,amount,0);
        return ans==INT_MAX ? -1 : ans;
    }
};


class Solution {
public:
    //method 2  TC: O(amount × number_of_coins) , SC= O(amount)
    int coinChange(vector<int>& coins, int amount) {
        vector<int>result(amount+1,INT_MAX);
        result[0]=0;
        for(int i=0;i<=amount;i++)
        {
            for(int coin: coins)
            {
                if(coin <=i && result[i-coin] !=INT_MAX) 
                result[i]=min(result[i] , 1+ result[i-coin]);
            }
        }

        return result[amount]==INT_MAX?-1 :result[amount];
    }
};