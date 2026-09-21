class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int left=0;
        int right = n-1;
        while(left<right && s[left] == s[right]){
            char x = s[left];
            while(left<right && s[left] == x) left++;

            while(left<=right && s[right]==x) right--;
        }

        return right-left+1;      
    }
};