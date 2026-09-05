class Solution {
public:
    string reverseWords(string s) {
        int N=s.size();
        int j=0;
        for(int i=0;i<=N;i++){
            int k=i;
            if(s[i]==' ' || i==s.size()){
                while(j<k){
                    swap(s[j],s[k-1]);
                    j++;
                    k--;
                }
                j=i+1;
            }
        
            
        }
        return s;
    }
};