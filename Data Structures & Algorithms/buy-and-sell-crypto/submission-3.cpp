class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0;
        int r = 1;
        int maxi = 0;
        while(r < n){
            if(prices[r] < prices[l]){
                l=r;
            }
            
                int maxp = prices[r]-prices[l];
                if(maxp > maxi){
                    maxi = maxp;
                }
                r++;
            
        }
        return maxi;
    }
};
