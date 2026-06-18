class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string temp="";
        stack<string> ans;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(temp != ""){
                    ans.push(temp);
                }
                temp="";
            }
            else if(s[i]!=' '){
                temp.push_back(s[i]);
            }
        }
        if(temp != ""){
            ans.push(temp);
        }
        
        string dh="";
        while(!ans.empty()){
            dh+=(ans.top()+" ");
            ans.pop();
        }
        dh.pop_back();
        return dh;
    }
};