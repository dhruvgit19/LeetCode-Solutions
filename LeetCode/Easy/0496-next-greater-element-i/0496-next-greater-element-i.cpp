class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(nums1[i]==nums2[j]){
                    for(int k=j;k<m;k++){
                            if(nums2[k]>nums2[j]){
                                ans.push_back(nums2[k]);
                                count++;
                                break;
                            }

                    }
                    if(count==0){
                        ans.push_back(-1);
                    }
                    break;

                }
            }
        }
        return ans;
    }
};