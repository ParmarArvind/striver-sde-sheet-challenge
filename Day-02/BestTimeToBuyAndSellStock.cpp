//  TC: O(N)
//  SC: O(N)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxPro=0;

        vector<int>maxSuffixPrice(n);
        maxSuffixPrice[n-1]=prices[n-1];

        for(int i=n-2;i>=0;i--)
        {
            maxSuffixPrice[i]=max(maxSuffixPrice[i+1],prices[i]);
        }

        for(int i=0;i<n;i++)
        {
            int currProfit=maxSuffixPrice[i]-prices[i];
            maxPro= max(maxPro, currProfit);
        }

        return maxPro;
    }
};


//  TC: O(N)
//  SC: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxPro=0;
        int minPrice=prices[0];
        
        for(int i=0;i<n;i++)
        {
            maxPro=max(maxPro , prices[i]-minPrice);
            minPrice=min(minPrice,prices[i]);
        }

        return maxPro;
    }
};