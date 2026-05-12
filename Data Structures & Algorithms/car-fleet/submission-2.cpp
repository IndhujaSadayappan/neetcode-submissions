class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> time;
        stack<double> st;
        int n = position.size();
        for(int i=0;i<n;i++){
            double t = (double)(target - position[i])/speed[i];
            time.push_back({position[i],t});
        }
        sort(time.begin(),time.end());
         for(int i=n-1;i>=0;i--){
            double ct = time[i].second;
            if(st.empty() || ct > st.top()){
                st.push(ct);
            }
         }
         return st.size();
    }
};
