class Solution {
public:

    int totaldays(vector<int>& weights, int cap){
        int days=1;
        int load = 0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(weights[i]+load > cap){
                days+=1;
                load = weights[i];
            }
            else load+=weights[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi = max(maxi, weights[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int low = maxi;
        int high = sum;
        int ans=0;
        while(low<=high){
            int mid = low + (high-low)/2;
            int finaldays = totaldays(weights, mid);
            if(finaldays <= days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};