 
class Solution {
public:
//mehtod -1 Brute Force
// TC: O(M × N × (M + N))
// SC: O(M × N)
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>>temp(n,vector<int>(m,1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                if(matrix[i][j]==0)
                {
                    //set ith row and jth col '0'
                    for(int k=0;k<m;k++) temp[i][k]=0;
                    for(int k=0;k<n;k++) temp[k][j]=0;

                }
            }
        }
        //now fill all the reaminig ele of matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(temp[i][j]==0) matrix[i][j]=0;
            }
        }
    }
};

// method 2: Better
// TC: O(M × N)
// SC: O(M + N)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_set<int>row;
        unordered_set<int>col;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // stroe this row and col to make its ele zero
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(int i:row)
        {
            for(int j=0;j<m;j++) matrix[i][j]=0;
        }

        for(int j:col)
        {
            for(int i=0;i<n;i++) matrix[i][j]=0;
        }

    }
};

// method 3: optimal (in-place)
// TC: O(M × N)
// SC: O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        bool isFirstRowZero=false;
        bool isFirstColZero=false;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // store this row and col to make its ele zero
                if(matrix[i][j]==0)
                {
                    if(i==0) isFirstRowZero=true;
                    if(j==0) isFirstColZero=true;

                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
         for(int i=1;i<n;i++) {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<m;j++) matrix[i][j]=0;
            }
        }

        //now fill all the reaminig ele of matrix
        for(int j=1;j<m;j++) {
            if(matrix[0][j]==0) {
                for(int i=0;i<n;i++) matrix[i][j]=0;
            }
        }

        if(isFirstRowZero) for(int j=0;j<m;j++) matrix[0][j]=0;
        if(isFirstColZero) for(int i=0;i<n;i++) matrix[i][0]=0;

    }
};