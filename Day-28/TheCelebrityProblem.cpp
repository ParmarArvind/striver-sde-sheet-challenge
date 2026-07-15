class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        vector<int>yeKitnoKoJanta(n,0);
        
        vector<int>kitneJanteHaiIsko(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(mat[i][j]==1) {
                    yeKitnoKoJanta[i]++;
                    kitneJanteHaiIsko[j]++;
                }
            }
        }
        
        // int celebrity=-1;
        for(int i=0;i<n;i++)
        {
            if(yeKitnoKoJanta[i]==0 && kitneJanteHaiIsko[i]==n-1) return i;
        }
        
        return -1;
        
    }
};