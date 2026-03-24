class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int> positive;
        vector <int> negative;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else if (nums[i]<0){
                negative.push_back(nums[i]);
            }
        }
        
        vector<int> ans;
        for(int i = 0; i < positive.size(); i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }

        return ans;
    }
};