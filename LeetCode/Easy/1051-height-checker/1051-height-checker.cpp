class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int count=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(heights[i]);
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=ans[i]) count++;
        }
        return count;
    }
};