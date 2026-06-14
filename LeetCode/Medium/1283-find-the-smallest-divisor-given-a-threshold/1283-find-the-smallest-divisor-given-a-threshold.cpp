class Solution {
public:

    long long divi(vector<int>& nums, int b){
        long long sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum += ceil((double)nums[i]/(double)b);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
        }
        int low = 1;
        int high = maxi;
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(divi(nums,mid)<=threshold){
                ans = mid;
                high=mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};