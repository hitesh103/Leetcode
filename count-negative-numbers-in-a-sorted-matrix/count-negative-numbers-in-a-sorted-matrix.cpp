class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt =0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout << grid[i][j] << " ";
                if(grid[i][j]<0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};