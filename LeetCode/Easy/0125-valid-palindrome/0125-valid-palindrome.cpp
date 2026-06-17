class Solution {
public:

    char lower(char ch){
        if(ch>='a' && ch<='z' || ch>=0 && ch<=9){
            return ch;
        }
        else{
            char temp = (ch - 'A') +'a';
            return temp;
        }
    }

    bool isPalindrome(string s) {
        int n=s.size();
        string temp = "";
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                temp.push_back(lower(s[i]));
            }
        }
        int i=0;
        int j=temp.size()-1;
        while(i<j){
            if(temp[i] != temp[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};