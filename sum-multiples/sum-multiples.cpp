class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> ans;
       int sum =0;
        for(int i=1;i<=n;i++){
            if(i%3==0){
                ans.push_back(i);
            }else if(i%5==0){
                ans.push_back(i);
            }else if(i%7==0){
                ans.push_back(i);
            }
        }

        for(int i =0;i<ans.size();i++){
            sum += ans[i];
        }

        return sum;
    }
};