class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==target) return true;
            }
        }

        return false;
        
    }
};

class Solution {
public:
//method 2 tc=o(m +log(n)) sc=o(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {

            if(matrix[i][n-1] >=target ) {
                row=i;
                break;
            }
        }

        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(matrix[row][mid]==target) return true;
            else if(matrix[row][mid] < target) start=mid+1;
            else end=mid-1;
        }

        return false;
        
    }
};


class Solution {
public:
//method 3 tc=o(log(m*n)) sc=o(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int start=0;
        int end=m-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(matrix[mid][n-1]>=target) {
                row=mid;
                end=mid-1;
            }
            else if(matrix[mid][n-1] < target) start=mid+1;
        }
        start=0; end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(matrix[row][mid]==target) return true;
            else if(matrix[row][mid] < target) start=mid+1;
            else end=mid-1;
        }
        return false;
    }
};