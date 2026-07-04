class Solution {
public:
    //method -1  tc=O(n*n!) ,sc=O(n^2)
    bool isSafe(vector<string>&board ,int row,int col)
    {
            int n=board.size();
            // Check the entire column
            for(int i=0;i<n;i++)
            {
                if(i!= row && board[i][col] =='Q') return false;
            }

            // Check upper-left diagonal
            int i=row-1 ;
            int j=col-1;
            while(i>=0 && j>=0)
            {
                if(board[i][j]=='Q') return false;
                i-- , j--;
            }

            // Check lower-right diagonal
            i=row+1 ; j=col+1;
            while(i<n && j<n)
            {
                if( board[i][j]=='Q') return false;
                i++ , j++;
            }
            
            // Check upper-right diagonal
            i=row-1 ; j=col+1;
            while(i>=0 && j<n)
            {
                if( board[i][j]=='Q') return false;
                i--; j++;
            }

            // Check lower-left diagonal
            i=row+1 ;  j=col-1;
            while(i<n && j>=0)
            {
                if( board[i][j]=='Q') return false;
                i++; j--;
            }

            return true;
    }
    void solve(int n,int row,vector<string>&board, vector<vector<string>>& result)
    {
        if(row==n ){
            result.push_back(board);
            return ;
        }
        
        for(int j=0;j<n;j++)
        {
            // Place the queen
            board[row][j]='Q';

            if(isSafe(board,row,j))
            {
                // place next queen at its right place
                solve(n,row+1,board,result);
            }

            // remove the queen (backtrack)
            board[row][j]='.';
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>result;
        vector<string>board(n,string(n,'.'));
        solve(n,0,board,result);

        return result;
    }
};



class Solution {
public:
    // method -2 TC = O(n!) ,SC= O(n^2) 
    vector<vector<string>> result;
    int N;
    unordered_set<int> cols;
    unordered_set<int> diags;
    unordered_set<int> antiDiags;

    void solve(vector<string> &board ,int row)
    {
        if(row>=N)
        {
            result.push_back(board);
            return ;
        }

        for(int col=0;col<N;col++)
        {
            int diag_id       = row-col; 
            int anti_diag_id  = row+col;
            
            /*
                If the col, or diagonal or anti_diaonal
                are used, means one of them has a Queen placed
                already which can attack, so look for other column
            */
            if(cols.find(col) != cols.end() ||
              diags.find(diag_id) != diags.end() ||
              antiDiags.find(anti_diag_id) != antiDiags.end())
                continue;
            
            cols.insert(col);
            diags.insert(diag_id);
            antiDiags.insert(anti_diag_id);
            board[row][col] = 'Q';
            
            solve(board, row+1);

            cols.erase(col);
            diags.erase(diag_id);
            antiDiags.erase(anti_diag_id);
            board[row][col] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        N=n;
        vector<string>board(n,string(n,'.'));
        solve(board,0);
    
    return result;
    }
};