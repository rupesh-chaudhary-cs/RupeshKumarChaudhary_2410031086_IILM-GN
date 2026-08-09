class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N=nums.size();
        int requiredSum=0;
        int currentSum=0;
        int j=0;
        for(int i=0;i<=N;i++){
            requiredSum+=i;
            if(i<N){
                currentSum+=nums[j];
                j++;
            }
        }
        
        if(requiredSum>currentSum){
            return requiredSum-currentSum;
            
        }else if(requiredSum==currentSum){
            return  0;
        }
        return -1;

    }
};