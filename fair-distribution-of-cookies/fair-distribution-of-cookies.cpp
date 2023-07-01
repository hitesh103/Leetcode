class Solution {
public:

    int ans = INT_MAX;    
    void solve(int index,int k,vector<int>& cookies,vector<int>& res){
        if(index == cookies.size()){
            int maxi = INT_MIN;
            for(int i =0;i<res.size();i++){
                maxi = max(maxi,res[i]);
            }
            ans = min(ans,maxi);
            return;
        }

        for(int i=0;i<k;i++){
            res[i] += cookies[index];
            solve(index+1,k,cookies,res);
            res[i] -= cookies[index];
            if(res[i]==0)
            break;
        }
        return ;
    }
      
    int distributeCookies(vector<int>& cookies, int k) {  
        vector<int> res(k,0);
        solve(0,k,cookies,res);
        return ans;
    }
};