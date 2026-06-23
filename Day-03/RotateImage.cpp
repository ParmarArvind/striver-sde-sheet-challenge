class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>result (n,vector<int>(n));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                result[j][n-i-1]= matrix[i][j];
            }
        }
        matrix=result;
        
    }
};


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // make transpose
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        // swap matrix[i][j] to matrix[i][n-j-1]
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=temp;
            }
        }
    }
};