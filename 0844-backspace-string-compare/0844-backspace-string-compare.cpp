class Solution {
public:
    string performBackSpace(string s){
        string res;
        stack<char>st;
        for(auto c:s){
            if(c=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(c);
            }
        }
        while (!st.empty()) {
            res+=st.top();
            st.pop();
        }
        cout<<res<<endl;
        return res;
    }
    bool backspaceCompare(string s, string t) {
        string s1=performBackSpace(s);
        string t1=performBackSpace(t);
        return s1==t1;
        
    }
};