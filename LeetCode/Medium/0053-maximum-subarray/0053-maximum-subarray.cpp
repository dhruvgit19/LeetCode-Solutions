class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // KADANE'S ALGORITHM : 

        int n=nums.size();
        int currentsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            currentsum+=nums[i];
            maxsum=max(maxsum,currentsum);

            if(currentsum<0) currentsum=0;
        }
        return maxsum;
    }
};