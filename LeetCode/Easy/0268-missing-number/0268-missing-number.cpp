class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expectedsum=0;
        for(int i=0;i<=n;i++){
            expectedsum=expectedsum+i;
        }

        int actualsum=0;
        for(int i=0;i<n;i++){
            actualsum=actualsum+nums[i];
        }

        int output=0;
        if(expectedsum!=actualsum){
            output=expectedsum-actualsum;
        }
        return output;
    }
};