class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i=1;i<=9;i++){
            long long num = i;
            // cout << "num : " << num << " i : " << i << endl;
            // if(num >= low && num <= high){
            //     cout << "In range 1 added : " << num << endl;
            //     ans.push_back(num);
            // }
            for(int j=i+1;j<=9;j++){
                // cout << "j : " << j <<endl;
                num = num*10 + j;
                // cout << "NUM : " << num << endl;
                if(num >= low && num <= high){
                    // cout << "In range 2 added : " << num << endl;
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};