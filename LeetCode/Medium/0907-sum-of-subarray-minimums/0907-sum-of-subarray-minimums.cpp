class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> s;
        int MOD = 1e9+7;
        int n = arr.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            while(!s.empty() && arr[s.top()] > arr[i]){
                int e = s.top();s.pop();
                int l = (s.empty())? e + 1: e - s.top();
                int r = i - e;
                ans =(( ans % MOD) + ((long long)arr[e] * l * r)%MOD)%MOD;  
            }
            s.push(i);
        }
        while(!s.empty()){
            int e = s.top();s.pop();
            int l = (s.empty())? e + 1:e - s.top();
            int r = n - e;
            ans = (ans + ((long long)arr[e]*l * r % MOD))%MOD;
        }
        return ans;
    }
};