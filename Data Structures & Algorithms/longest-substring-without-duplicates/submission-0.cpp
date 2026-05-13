class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        
        int res = 0;
        unordered_set<char> st;
        int l=0;
        int r =0;
        while(r<n){
            while(st.find(s[r])!=st.end()){
                    st.erase(s[l]);
                    l++;
            }
            st.insert(s[r]);
            int k = r-l+1;
            res = max(res,k);
            r++;
        }
return res;
    }
};
