class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxa = 0;
        stack<int> st;
        for(int i=0;i<=n;i++){
            int ch = (i==n)?0:heights[i];
            while(!st.empty() && ch < heights[st.top()]){
                int height = heights[st.top()];
                st.pop();
                int right = i;
                int left = st.empty()?-1:st.top();
                int w = right-left-1;
                maxa = max(maxa,height*w);

            }
            st.push(i);
        }
        return maxa;
    }
};
