class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        string str;
        for(char ch:s){
            if(stk.empty()){
                stk.push(ch);
            }else{
                if(stk.top()==ch){
                    stk.pop();
                }else{
                    stk.push(ch);
                }
            }
        }
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};