class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int last=0;
        int mul=1;
        while(temp>0){
            last = last + (temp%10);
            mul = mul * (temp%10);
            temp=temp/10;
        }
        if(n % (last + mul) == 0) return true;
        return false;
    }
};