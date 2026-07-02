class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        vector<pair<int,int>>arr;
        int n=deadline.size();
        for(int i=0;i<n;i++)
        {
            arr.push_back({ deadline[i] ,profit[i]});
        }
        sort(arr.begin() ,arr.end());
        
        priority_queue<int,vector<int>,greater<int>>pq;
        int result=0;
        for(int i=0;i<n;i++)
        {
            int currDeadline=arr[i].first;
            int currProfit=arr[i].second;
            
            result += currProfit;
            pq.push(currProfit);
            
            if(pq.size()> currDeadline) {
                int minProfit=pq.top(); 
                pq.pop();
                
                result -= minProfit;
            }
        }
        
        return {pq.size() ,result};
    }
};