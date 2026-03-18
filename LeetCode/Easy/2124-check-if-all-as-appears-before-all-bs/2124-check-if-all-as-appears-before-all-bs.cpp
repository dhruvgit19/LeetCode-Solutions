class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        bool seenB=false;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='b'){
            seenB = true;
            }
            else if(c=='a' && seenB){
                return false;
            }
        }
        return true;
    }
};