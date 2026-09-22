class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) count++;
            else count=0;
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};