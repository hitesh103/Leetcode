class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i =0 ;
        int j=0;

        while(i<n && j<m){

            // If same element then push to ans and make i++ and  j++
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            // If 1st element is less than we have to increment it's index to match it to 2nd element
            else if (nums1[i]<nums2[j]){
                i++;
            }
            // If 2nd element is less than we have to increment it's index to match it to 1st element
            else{
                j++;
            }
        }

        return ans;
    }
};