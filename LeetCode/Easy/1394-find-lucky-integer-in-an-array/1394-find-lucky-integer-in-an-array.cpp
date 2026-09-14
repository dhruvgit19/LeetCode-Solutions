class Solution {
public:
    int findLucky(vector<int>& arr) {
        int temp[501]={};
        int n=arr.size();
        for(int i=0;i<n;i++){
            temp[arr[i]]++;
        }
        int ans=-1;
        for(int i=1;i<501;i++){
            if(temp[i] == i) ans=i;
        }
        return ans;
    }
};