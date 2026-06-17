class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int i=0;
        int temp=0;
        while(i<n-1){
            int sum = s[i]-s[i+1];
            if (sum<0){
                sum = sum*(-1);
            }
            temp += sum;
            i++;
        }
        return temp;
    }
};