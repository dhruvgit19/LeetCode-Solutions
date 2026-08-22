class Solution {
public:
    int trap(vector<int>& height) {
    int totalWater = 0;
    stack<int>st;
    for (int i = 0; i < height.size(); ++i) {
        while (!st.empty() && height[i] > height[st.top()]) {
            int mid = st.top();
            st.pop();
            if (st.empty()) break;

            int left = st.top();
            int h = min(height[left], height[i]) - height[mid];
            int width = i - left - 1;
            totalWater += h * width;
        }
        st.push(i);
    }
    return totalWater;
    }
};