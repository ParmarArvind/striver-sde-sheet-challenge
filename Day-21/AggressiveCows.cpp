// method 1 tc=O(n*log(max-min)) sc=O(1)
class Solution {
  public:
    bool isSafe(vector<int>& arr,int k,int dist)
    {
        int prev=arr[0];
        int count=1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]-prev>=dist) {
                count++;
                prev=arr[i];
            }
        }
        
        return count>=k;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin() ,arr.end());
        int left=1;
        int right=arr.back();
        int result=0;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            
            if(isSafe(arr,k,mid))
            {
                result=mid;
                left=mid+1;
            }
            else right=mid-1; 
        }
        
        return result;
    }
};