class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N=nums.size();
        int majorityElement=N/2;
        int result;
        map<int,int>mpp;
        for(int i=0;i<N;i++){
            mpp[nums[i]]+=1;
        }
        for(auto it:mpp){
            if(it.second>N/2){
                result=it.first;
            }
        }
        return result;
        

    }
};