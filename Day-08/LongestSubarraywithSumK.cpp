class Solution {
  public:
    int longestSubarray(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;//sum ,index
        int preSum=0;
        mp[preSum]=-1;
        int length=0;
        for(int i=0;i<n;i++)
        {
            preSum+=arr[i];
            int needed=preSum-target;
            if(mp.find(needed) != mp.end()) 
                length =max(length , i-mp[needed]);
                
            if(mp.find(preSum)==mp.end()) mp[preSum]=i;
        }
        //for the last one
        if(mp.find(preSum-target) != mp.end()) length =max(length , n-1-mp[preSum-target]);
    
        return length;
    }
};