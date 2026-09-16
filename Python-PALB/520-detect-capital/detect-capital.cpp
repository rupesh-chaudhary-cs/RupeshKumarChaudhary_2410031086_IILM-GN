class Solution {
public:
    bool detectCapitalUse(string word) {
        int N=word.size();
        int i=0;
        if(N==1){
            return true;
        }
        if(isupper(word[i])){
            if(isupper(word[i+1])){
                for(int j=2;j<N;j++){
                    if(islower(word[j])){
                        return false;
                    }
                }
                return true;

            }else if(islower(word[i+1])){
                for(int k=2;k<N;k++){
                    if(isupper(word[k])){
                        return false;
                    }
                }
                return true;
            }
        }else if(islower(word[i])){
            for(int l=1;l<N;l++){
                if(isupper(word[l])){
                    return false;
                }
            }
            return true;
        }
        return false;
    }

};