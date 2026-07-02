class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
       int n=arr.size();
        sort(arr.begin() ,arr.end());
        
        sort(dep.begin() ,dep.end());
        int result=0;
        int i=0;
        int j=0;
        
        int paltNeeded=0;
        while(i<n && j<n)
        {
            if(arr[i] <= dep[j])
            {
                paltNeeded++;
                i++;
                result=max(result,paltNeeded);
            }
            else {
                paltNeeded--;
                j++;
            }
        }
        
        
        return result;
    }
};
