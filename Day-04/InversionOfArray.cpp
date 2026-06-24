class Solution {
  public:
  int  merge(vector<int>& arr , int start ,int mid,int end)
  {
      vector<int> temp;
      int count=0;
      int left=start;
      int right=mid+1;
      
      while(left<=mid && right<=end)
      {
          if(arr[left] <=arr[right])
          {
              temp.push_back(arr[left]);
              left++;
          }else {
              count += (mid -left+1);
              temp.push_back(arr[right]);
              right++;
          }
      }
      
      while(left<=mid) {
            temp.push_back(arr[left]);
            left++;
      }
      
      while(right<= end ) {
            temp.push_back(arr[right]);
            right++;
      }
      
      // now fill these in original array
      for(int i=start ;i<=end;i++)
      {
          arr[i]=temp[i-start];
      }
      return count;
      
  }
  int mergeSort(vector<int>&arr, int start,int end)
  {
      int count=0;
      if(start>=end) return count;
      int mid= start +(end-start)/2 ;
      
      count += mergeSort(arr,start,mid);
      count += mergeSort(arr,mid+1,end);
      
      count += merge(arr,start,mid,end);
      return count;
  }
  
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergeSort(arr, 0, arr.size()-1);
    }
};