class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        int n=strs.size();
        string ans="";
        sort(strs.begin(),strs.end());
        int i=0;
        while(i<strs[0].size() && strs[0][i] == strs[strs.size()-1][i]){
            ans+=strs[0][i];
            i++;
        }
        return ans;
    }
};