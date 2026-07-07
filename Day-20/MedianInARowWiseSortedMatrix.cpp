class Solution {
  public:
    // mehtod -1 tc=o(n*m*log(n*m)) sc=o(n*m)
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int>arr;
        int m=mat.size();
        int n=mat[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr.push_back(mat[i][j]);
            }
        }
        
        sort(arr.begin(),arr.end());
        return arr[arr.size()/2];
        
    }
};

class Solution {
  public:
  // method -2 tc=o(n*log(m)*log(n*m)) sc=o(n)
    int median(vector<vector<int>> &mat) {
        // code here
        priority_queue<vector<int> ,vector<vector<int> > ,greater<vector<int> >>pq;
        int m=mat.size();
        int n=mat[0].size();
        
        for(int i=0;i<m;i++)
        {
            pq.push({mat[i][0],i,0});
        }
        
        int count=0;
        int medianIdx=(n*m)/2;
        int result;
        
        while(count<=medianIdx)
        {
            vector<int>vec=pq.top();
            pq.pop();
            int val=vec[0];
            int i=vec[1];
            int j=vec[2];
            
            result=val;
            count++;
            
            if( j+1 < n)
            {
                pq.push({mat[i][j+1] ,i,j+1});
            }
        }
        return result;
        
    }
};

// method -3 tc=o(n*log(max-min)*log(m)) sc=o(1)
class Solution {
  public:
    int median(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();

    int minVal = INT_MAX, maxVal = INT_MIN;
  
    // finding the minimum and maximum elements in the matrix
    for (int i = 0; i < n; i++) {
        if (mat[i][0] < minVal)
            minVal = mat[i][0];
        if (mat[i][m - 1] > maxVal)
            maxVal = mat[i][m - 1];
    }

    int desired = (n * m + 1) / 2;
	int low = minVal, high = maxVal;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int place = 0;

        // count elements smaller than or equal to mid
        for (int i = 0; i < n; ++i)
            place += 
            upper_bound(mat[i].begin(), mat[i].end(), mid)
                     - mat[i].begin();
        
        // adjust the range based on the count of elements found
        if (place < desired)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}
};