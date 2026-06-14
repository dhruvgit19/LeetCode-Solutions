class Solution {
public:

    bool bouquets(vector<int>& bloomDay, int day, int m, int k){
        int count=0;
        int bouq=0;
        int n = bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                count++;

                if(count==k){
                    bouq++;
                    count=0;
                }
            }
            else count=0;
        }
        return bouq>=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n < (long long)m*k) return -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }

        int low=mini;
        int high=maxi;
        int ans = maxi;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(bouquets(bloomDay, mid, m, k)){
                ans=mid;
                high=mid-1;
            }
            else low = mid+1;;
        }
        return ans;
    }
};