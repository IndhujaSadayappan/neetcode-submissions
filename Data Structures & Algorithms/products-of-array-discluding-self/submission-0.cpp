class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            int ans = 1;
            for(int j=0;j<arr.size();j++){
                if(j!=i){
                    ans *= arr[j];
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};
