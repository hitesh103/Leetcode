class Solution {
public:

    int makeBinary(vector<int>& a) {
        int n = a.size();
        int ans = 0;
        int ans2 = 0;
        for (int i = 0; i < n; i++) {
            ans = ans + (pow(2, n - i - 1) * a[i]);
            if(a[i] == 0){
            ans2 = ans2 + (pow(2, n - i - 1) * 1);
            }
        }

        return (ans2-ans);
    }

    // 1000
    // 0111

    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(grid[i][0] == 0){
                cout<<"I "<<i<<endl;
                for(int j = 0; j < m; j++){
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        for(int i = 0; i < m; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(grid[j][i] == 0){
                    count++;
                }
            }

            if(count > (n - count)){
                for(int j = 0; j < n; j++){
                    grid[j][i] = 1 - grid[j][i];
                }
            }
        }

        int totalScore = 0;
        for(int i = 0; i < n; i++){
            int score = 0;
            for(int j = m-1; j >=0; j--){
                if(grid[i][j] == 1){
                    score += (1<<(m-j-1));
                }
            }

            cout<<score<<" ";
            totalScore += score;
        }
        
        
        return totalScore;

    }
};