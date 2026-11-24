class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>stk1;
        stack<char>stk2;
        for(char ch1:s){
            if(stk1.empty()){
                if(ch1!='#'){
                    stk1.push(ch1);
                }
                
            }else{
                if(ch1=='#'){
                    stk1.pop();
                }else{
                    stk1.push(ch1);
                }
            }
        }
         for(char ch2:t){
            if(stk2.empty()){
                if(ch2!='#'){
                    stk2.push(ch2);
                }
                
            }else{
                if(ch2=='#'){
                    stk2.pop();
                }else{
                    stk2.push(ch2);
                }
            }
        }
        if(stk1==stk2){
            return true;
        }else{
            return false;
        }
    }
};