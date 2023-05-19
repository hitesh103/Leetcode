class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n  = nums.size();
        int start = 0 , end = n-1;
        vector<int> ans;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                int ind=mid,ind2=mid;
                while(ind>=0 && nums[ind]==target)
                    ind--;
                while(ind2<n && nums[ind2]==target)
                    ind2++;
                ans.push_back(ind+1);
                ans.push_back(ind2-1);
                return ans;
            }else if(nums[mid] > target){
                end = mid -1;
            }else{
                start = mid + 1;
            }
        }
        return {-1,-1};
    }
};