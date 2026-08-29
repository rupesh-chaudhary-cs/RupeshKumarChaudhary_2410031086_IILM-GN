class Solution {
public:
    int findLucky(vector<int>& arr) {
        int N=arr.size();
        int largest=-1;
        map<int,int>mpp;
        for(int i=0;i<N;i++){
            mpp[arr[i]]+=1;
        }
        for(auto it:mpp){
            if(it.first==it.second){
                if(it.first>largest){
                    largest=it.first;
                }
            }
        }
        return largest;

    }
};