class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int leftsum = 0;
        int rightsum = n-1;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        for(int i=0;i<n;i++){
            rightsum = total - leftsum - nums[i];
            if(leftsum == rightsum) return i;
            leftsum += nums[i];
        }
        return -1;
    }
};