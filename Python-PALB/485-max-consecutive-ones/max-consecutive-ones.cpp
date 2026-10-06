class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int N=nums.size();
        int continousOne=0;
        int maximumOne=0;
        for(int i=0;i<N;i++){
            if(nums[i]==1){
                continousOne++;
            }else if(nums[i]!=1){
                if(continousOne>maximumOne){
                    maximumOne=continousOne;
                    
                }
                continousOne=0;
            }
            if(i==N-1){
                if(continousOne>maximumOne){
                    maximumOne=continousOne;
                    continousOne=0;
                }
            }
        }
        return maximumOne;
    }
};