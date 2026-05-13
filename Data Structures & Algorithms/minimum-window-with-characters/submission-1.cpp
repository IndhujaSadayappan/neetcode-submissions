class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);
        for(char c:t){
            freq[c]++;
        }
        int k = t.size();
       int l=0;
       int minlen=INT_MAX;
       int start = 0;
       for(int right=0;right<s.size();right++){
        if(freq[s[right]]>0) k--;
        freq[s[right]]--;
        while(k==0){
            if(right-l+1<minlen){
            minlen = right-l+1;
            start=l;
            }
            freq[s[l]]++;
            if(freq[s[l]] > 0) k++;
            l++;
        }
       }
       return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};
