class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mpp;
        int N=s.size();
        int M=t.size();
        for(int i=0;i<M;i++){
            mpp[t[i]]+=1;
        }
        for(int j=0;j<N;j++){
            mpp[s[j]]-=1;
        }
        for(auto it: mpp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};