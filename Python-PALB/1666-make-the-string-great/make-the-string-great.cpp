class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string str;
        for(char ch:s){
            if(st.empty()){
                st.push(ch);
            }else if(!st.empty()){
                if(abs(st.top()-ch)==32){
                    st.pop();
                }else{
                    st.push(ch);
                }
            }
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};