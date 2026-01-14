class Solution {
public:
    int F(int n){
        if(n<=1){
            return n;
        }
        return F(n-1) + F(n-2);
    }
    int fib(int n) {
        return F(n);
    }
};