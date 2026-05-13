class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> counts1(26,0),counts2(26,0);
        for(char c:s1){
            counts1[c-'a']++;
        }
        int k = s1.size();
        for(int i=0;i<k;i++){
            counts2[s2[i]-'a']++;
        }
        if(counts1==counts2) return true;
        for(int i=k;i<s2.size();i++){
            counts2[s2[i]-'a']++;
            counts2[s2[i-k]-'a']--;
            if(counts1==counts2) return true;
        }
        return false;
    }
};
