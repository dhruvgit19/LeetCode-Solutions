class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        int cnt1=0;
        int cnt2=0;
        string ans;
        int mini = min(n1,n2);
        for(int i=0;i<mini;i++){
            ans.push_back(word1[i]);
            n1--;
            cnt1++;
            ans.push_back(word2[i]);
            n2--;
            cnt2++;
        }
        if(n1>0){
            while(n1>0){
                ans.push_back(word1[cnt1]);
                cnt1++;
                n1--;
            }
        }
        if(n2>0){
            while(n2>0){
                ans.push_back(word2[cnt2]);
                cnt2++;
                n2--;
            }
        }
        return ans;
    }
};