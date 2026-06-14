class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                combined.push_back(nums1[i]);
                i++;
            }
            else{
                combined.push_back(nums2[j]);
                j++;
            }
        }
        while(i < n) {
            combined.push_back(nums1[i]);
            i++;
        }
        while(j < m) {
            combined.push_back(nums2[j]);
            j++;
        }

        int l=combined.size();
        if(l%2!=0) return combined[l/2];
        else {
            return (combined[(l / 2) - 1] + (double)combined[l / 2]) / 2.0;
        }
        return -1;
    }
};