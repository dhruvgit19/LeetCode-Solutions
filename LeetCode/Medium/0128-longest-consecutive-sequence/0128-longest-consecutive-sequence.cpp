class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int largest=1;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int num : st){
            if(st.find(n-1)!=st.end()) continue;

            int currentnum=num;
            int length=1;

            while(st.find(currentnum+1)!=st.end()){
                currentnum++;
                length++;
            }
            largest=max(largest,length);
        }
        return largest;
    }
};