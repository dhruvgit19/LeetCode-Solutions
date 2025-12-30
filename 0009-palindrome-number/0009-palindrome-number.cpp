class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int n = x;
        int revNum = 0;
        int dup = n;

        while(n!=0){
            int ld = n%10;
            if (revNum > INT_MAX / 10) return false;
            revNum = (revNum*10) + ld;
            n = n/10;
        }
        if(dup == revNum){
            return true;
        }
        else return false;
    }
};