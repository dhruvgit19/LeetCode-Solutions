class Solution {
public:

    long long hours(vector<int>& piles, int b){
        long long total = 0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            total += ceil((double)piles[i] / (double)b);
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int ans=-1;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        int low = 1;
        int high = maxi;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(hours(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};