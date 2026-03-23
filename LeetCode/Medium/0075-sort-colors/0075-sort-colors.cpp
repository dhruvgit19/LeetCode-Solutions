class Solution {
public:
    void sortColors(vector<int>& nums) {

        // DUTCH NATIONAL FLAG APPROACH : 

        int n = nums.size();
        int low = 0, mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};