class Solution {
public:
    string removeDuplicates(string s) {
        string str1="";
        stack<char>stk;
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
            str1+=stk.top();
            stk.pop();
        }
        reverse(str1.begin(),str1.end());
        return str1;
        
    }
};