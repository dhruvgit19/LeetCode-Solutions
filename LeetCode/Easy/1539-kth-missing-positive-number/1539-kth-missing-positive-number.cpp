class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                k++;
            }
        }
        return k;
    }
};