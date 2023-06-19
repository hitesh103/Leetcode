class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int mx = 0;
        int sum = 0;

        for(int i=0;i<n;i++){
            sum += gain[i];
            mx = max(mx,sum);
        }

        return mx;
    }
};