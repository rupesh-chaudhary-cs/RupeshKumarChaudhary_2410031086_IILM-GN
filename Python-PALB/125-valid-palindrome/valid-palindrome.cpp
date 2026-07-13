class Solution {
public:
    bool isPalindrome(string s) {
       string str="";
       for(char ch:s){
        if(isalnum(ch)){
            str+=tolower(ch);
        }
       }
       string original=str;
       int N=str.size();
       int i=0;
       for(int i=0;i<str.size();i++ ){
        if(i>=N-i-1){
            break;
        }
        swap(str[i],str[N-i-1]);
       }
       if(original==str){
        return true;
       }else{
        return false;
       }
        
    }
};