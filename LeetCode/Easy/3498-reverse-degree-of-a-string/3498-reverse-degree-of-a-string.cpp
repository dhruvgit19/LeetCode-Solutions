class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int x = s[i];
            int temp = (97 - x) + 26;
            int prod = temp * (i+1);
            ans = prod + ans;
        }
        return ans;
    }
};