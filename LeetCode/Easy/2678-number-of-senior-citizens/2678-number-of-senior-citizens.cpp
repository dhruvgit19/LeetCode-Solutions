class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(details[i][11]>'6'){
                count++;
            }
            else if(details[i][11]=='6'){
                if(details[i][12]>'0'){
                    count++;
                }
            }
        }
        return count;
    }
};