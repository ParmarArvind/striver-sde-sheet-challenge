class Solution {
  public:
    int nthRoot(int n, int m) {
        if(n==1 || m<=1) return m;
        // first find its square root
        
        for(int i=0;i<=m;i++)
        {
            int power=pow(i,n);
            if(power==m) return i;
            if(power>m) return -1;
            
        }
        return -1;
        
    }
};


class Solution {
  public:
  // method -2
    int nthRoot(int n, int m) {
        if(n==1 || m<=1) return m;
        // first find its square root
        
       int left=1;
       int right=m;
       while(left<=right)
       {
           int mid=left+(right-left)/2;
           int result=1;
           for(int i=1;i<=n;i++)
           {
               result *=mid;
           }
           
           if(result==m) return mid;
           else if(result<m) left=mid+1;
           else right=mid-1;
       }
        return -1;
        
    }
};