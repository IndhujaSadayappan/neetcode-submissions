class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string s : tokens){
            if((s =="+" || s=="*"||s=="/"|| s=="-")  && st.size()>=2){
                int a = st.top();
                  st.pop();
                int b = st.top();
                st.pop();
                if(s=="+")  st.push(a+b);
                if(s=="-")  st.push(b-a);
                if(s=="*")  st.push(a*b);
                if(s=="/")  st.push(b/a);
        }
        else{        
            int x = stoi(s);
            st.push(x);
        }
        }
        return st.top();
    }
};
