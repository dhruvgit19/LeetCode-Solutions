class Solution {
public:
    int trap(vector<int>& height) {
        int total=0;
        stack<int> st;
        int n=height.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int mid=st.top();
                st.pop();
                if(st.empty()) break;
                int left = st.top();
                int boundary = min(height[left],height[i]) - height[mid];
                int width = i-left-1;
                total += boundary*width;
            }
            st.push(i);
        }
        return total;
    }
};