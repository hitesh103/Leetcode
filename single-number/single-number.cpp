class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        // Using map to keep track of Frequency of element.
        map<int,int> frequency;

        // Iterating over array to add count of element to map.
        for(int i=0;i<n;i++){
            frequency[nums[i]]++; //frequency[key]++
            //here we are at key nums[i] incrementing it value by 1.
        }

        // Ans variable to return.
        int ans;

        // Here we are cheking in whole map that if anyone's count is 1 means second value is 1 
        //then return it's first means that element.
        for(auto it = frequency.begin(); it!=frequency.end();it++){
            if(it->second == 1){
                ans = it->first;
            }
        }

        return ans;


        // We can use XOR also for this problem
    }
};