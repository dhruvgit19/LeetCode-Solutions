class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int first = 0;
        int last = n-1;
        while(last>first){
            swap(s[first], s[last]);
            first++;
            last--;
        }
    }
};