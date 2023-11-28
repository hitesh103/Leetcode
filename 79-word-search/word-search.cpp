class Solution {
public:

    bool solve(int row, int col, vector<vector<char>>& board , int index, string word,vector<vector<int>> &visited){

        //base case
        if(index >= word.length()){
            return true;
        }

        if(row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || visited[row][col] == 1 || board[row][col] != word[index]){
            return false;
        }

        visited[row][col] = 1;

            if(solve(row+1,col,board,index+1,word,visited) ||
            solve(row-1,col,board,index+1,word,visited) ||
            solve(row,col+1,board,index+1,word,visited) ||
            solve(row,col-1,board,index+1,word,visited)){
                return true;
            }

            visited[row][col] = 0;

            return false;
        
    }

    bool exist(vector<vector<char>>& board, string word) {
    vector<vector<int>> visited(board.size(), vector<int>(board[0].size(), 0));
        for(int row = 0;row <board.size();row++){
            for(int col = 0;col < board[0].size();col++){
                if(solve(row,col,board,0,word,visited)){
                    return true;
                }
            }
        }

        return false;

    }
};