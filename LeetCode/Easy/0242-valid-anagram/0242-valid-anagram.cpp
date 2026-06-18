class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n=s.size();
        int arr[26]={};
        for(int i=0;i<n;i++){
            arr[(s[i]-'a')]+=1;
        }
        for(int i=0;i<t.size();i++){
            arr[(t[i]-'a')]-=1;
        }
        int maxi=0;
        for(int i=0;i<26;i++){
            maxi = max(arr[i],maxi);
        }
        if(maxi>0) return false;
        return true;
    }
};