class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N=nums.size();
        int majorityElement=N/2;
        int result;
        map<int,int>mpp;
        for(int i=0;i<N;i++){
            mpp[nums[i]]+=1;
            if(mpp[nums[i]]>majorityElement){
                result=nums[i];
            }
        }
      
        return result;
        

    }
};