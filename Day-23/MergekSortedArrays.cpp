class Solution {
  public:
  //method -1 TC =O(n*m*log(n*m)) , SC=O(1)
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                result.push_back(mat[i][j]);
            }
        }
        sort(result.begin() ,result.end());
        
        return result;
        
    }
};

class Solution {
  public:
  //method -2 TC+O(n*m*log(n)) , SC=O(n)
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        
        priority_queue<
            tuple<int,int,int> ,
            vector<tuple<int,int,int>>,
            greater<tuple<int,int,int>>>pq;
            
        
        for(int i=0;i<n;i++)
        {
            pq.push({mat[i][0] ,i,0});
        }
        
        vector<int>result;
        while(!pq.empty())
        {
            auto [val ,i,j]= pq.top();
            pq.pop();
            
            result.push_back(val);
            
            if(j+1< m ) pq.push({mat[i][j+1] , i, j+1});
        }
        
        return result;
    }
};