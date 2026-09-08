class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int N=flowerbed.size();
        int count=0;
        for(int i=0;i<N;i++){
            if(N==1 && flowerbed[i]==0){
                flowerbed[i]=1;
                count+=1;
            }
            if(i==0 && N>1){
                if(flowerbed[i]==0){
                    if(flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        count++;
                    }
                }
            }
            if(i==N-1 && N>1){
                if(flowerbed[i]==0 && flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
            if(flowerbed[i]==0 && i!=0 && i!=N-1){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        if(count>=n){
            return true;
        }else{
            return false;
        }
    }
};