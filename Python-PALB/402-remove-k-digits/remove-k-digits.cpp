class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>stk;
        string str1="";
        int count=0;
        for(char ch:num){
            while(!stk.empty() && ch<stk.top() && k>0){
                stk.pop();
                k--;
            }
            stk.push(ch);
        }
        while(k>0 && !stk.empty()){
            stk.pop();
            k--;
        }
        while(!stk.empty()){
            str1+=stk.top();
            stk.pop();
        }
        reverse(str1.begin(),str1.end());

        int i=0;
        while(i<str1.size() && str1[i]=='0'){
            i++;
        }
        str1=str1.substr(i);
        if(str1.empty()){
            return "0";
        }

        return str1;
           
           

    }
};