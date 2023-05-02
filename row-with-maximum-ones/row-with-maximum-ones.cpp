class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int maxi = INT_MIN;
        vector<int> ans;

        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            maxi = max(maxi,cnt);
            }
        }

        int maxi2 = INT_MIN;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            maxi2 = max(maxi2,cnt);
            }

            if(maxi == maxi2){
                ans.push_back(i);
                break;
            }
        }

        ans.push_back(maxi);
        return ans;
        
    }
};