class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(int i=0;i<s.size();i++){
            char ch = s[i];;
            if(!result.empty() && result.back()==ch){
                result.pop_back();
            }
            else result.push_back(ch);
        }
        return result;
    }
};