class Solution {
public:
    bool solve(int row, int col, vector<vector<char>>& board, int index, string word, int** visited) {
        // Base case
        if (index >= word.length()) {
            return true;
        }

        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || visited[row][col] == 1 || board[row][col] != word[index]) {
            return false;
        }

        visited[row][col] = 1;

        if (solve(row + 1, col, board, index + 1, word, visited) ||
            solve(row - 1, col, board, index + 1, word, visited) ||
            solve(row, col + 1, board, index + 1, word, visited) ||
            solve(row, col - 1, board, index + 1, word, visited)) {
            return true;
        }

        visited[row][col] = 0;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        
        int** visited = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            visited[i] = new int[cols];
            fill(visited[i], visited[i] + cols, 0);
        }

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                if (solve(row, col, board, 0, word, visited)) {
                    // Clean up memory
                    for (int i = 0; i < rows; ++i) {
                        delete[] visited[i];
                    }
                    delete[] visited;
                    return true;
                }
            }
        }

        // Clean up memory
        for (int i = 0; i < rows; ++i) {
            delete[] visited[i];
        }
        delete[] visited;

        return false;
    }
};
