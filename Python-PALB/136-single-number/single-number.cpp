class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int N=nums.size();
    map<int,int>mpp;
    for(int i=0;i<N;i++){
        mpp[nums[i]]+=1;
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;
    }
};