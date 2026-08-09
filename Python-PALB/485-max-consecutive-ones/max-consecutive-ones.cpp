class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int N=nums.size();
        int maxConsecutive=0;
        int count=0;
        for(int i=0;i<N;i++){
            if(nums[i]==1){
                count++;
            }else if(nums[i]==0){
                if(maxConsecutive<count){
                    maxConsecutive=count;
                    count=0;
                }else if(maxConsecutive>count){
                    count=0;
                }else if(maxConsecutive==count){
                    maxConsecutive=count;
                    count=0;
                }
            }
        }
        
        if(maxConsecutive<count){
            maxConsecutive=count;
            return maxConsecutive;
        }else{
            return maxConsecutive;
        }
    }
};