class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currsum=0;
        int maxsum=nums[0];
        for(int i=0;i<n;i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};