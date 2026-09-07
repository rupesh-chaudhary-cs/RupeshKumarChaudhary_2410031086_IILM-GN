class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N=nums.size();
        int val=N/2;
        int ans;
        map<int,int>mpp;
        for(int i=0;i<N;i++){
            mpp[nums[i]]+=1;
            if(mpp[nums[i]]>val){
                ans=nums[i];
            }
        }
        return ans;
    }
};