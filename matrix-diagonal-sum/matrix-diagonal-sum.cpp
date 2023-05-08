class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int count = 0;

        int i = 0;
        int j = 0;

        while(i<row && j<col){
                count = count + (mat[i][j]);
                i++;
                j++;
        }

        int k = 0;
        int l = col-1;
        while(k<row && l>=0){
                count = count + (mat[k][l]);
                k++;
                l--;
            cout << count << endl;
        }
        int mid = (row) /2;
        if(row%2!=0){
            count = count - mat[mid][mid];
        }
        return count;
    }
};