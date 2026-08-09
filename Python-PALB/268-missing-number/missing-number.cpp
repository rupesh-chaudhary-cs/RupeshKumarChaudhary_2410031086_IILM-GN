class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N=nums.size();
        int requiredSum=0;
        int currentSum=0;
        for(int i=0;i<=N;i++){
            requiredSum+=i;
        }
        for(int j=0;j<N;j++){
            currentSum+=nums[j];
        }
        if(requiredSum>currentSum){
            int diff=requiredSum-currentSum;
            return diff;
        }else if(requiredSum==currentSum){
            return  0;
        }
        return -1;

    }
};