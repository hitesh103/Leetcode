class Solution {
public:
    int arr[101], cnt;
    int recurse(int ind, int cn){
        if(cn == 3) return 1;
        if(ind == cnt) return 0;
        return arr[ind]*recurse(ind+1, cn+1) + recurse(ind+1, cn);
    }
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mapi;
        int ans = 1;
        for(int i = 0 ; i < n ; i++){
            mapi[nums[i]]++;
        }
        cnt = 0;
        for(auto x : mapi) arr[cnt] = x.second, cnt++;
        if(mapi.size() < 3) return 0;
        return recurse(0, 0);
    }
};