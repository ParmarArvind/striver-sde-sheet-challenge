class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n=start.size();
        vector<pair<int,int>>arr;
        
        for(int i=0;i<n;i++)
        {
            arr.push_back({finish[i] , start[i]});
        }
        sort(arr.begin(),arr.end());
        
        int lastFinishTime=-1;
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            int startTime=arr[i].second;
            if(lastFinishTime < startTime ) {
                count++;
                lastFinishTime= arr[i].first;
            }
        }
        
        return count;
        
    }
};