class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int N=s.size();
       
        
        for(int i=0;i<s.size();i++){
            if(i>=N-1-i){
                return;
            }
            swap(s[N-1-i],s[i]);
        }
    }
};