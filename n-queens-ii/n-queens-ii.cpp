class Solution {
public:

    void solve(int col,int n,vector<int> &upperDiagonal, vector<int> &lowerDiagonal,vector<int> &leftRow ,int &count) {
        // Base Condn
        if(col == n){
            count ++;
            return;
        }

        //Taking the map of queens 
        for(int row =0;row<n;row++){
            if((upperDiagonal[n-1 + col - row] == 0) && (lowerDiagonal[row+col] == 0) && leftRow[row] == 0){
                upperDiagonal[n-1 + col - row] = 1;
                lowerDiagonal[row+col] =1;
                leftRow[row] = 1;
                solve(col+1,n,upperDiagonal,lowerDiagonal,leftRow,count);
                upperDiagonal[n-1 + col - row] = 0;
                lowerDiagonal[row+col] = 0;
                leftRow[row] = 0;
            }
        }
    }

    int totalNQueens(int n) {
        int count = 0;
        vector<int> upperDiagonal(2*n-1,0);
        vector<int> lowerDiagonal(2*n-1,0);
        vector<int> leftRow(n,0);
        solve(0,n,upperDiagonal,lowerDiagonal,leftRow,count);
        return count;
    }
};