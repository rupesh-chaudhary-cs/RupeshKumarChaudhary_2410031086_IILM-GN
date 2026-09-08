class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int N=nums.size();
        int maximum_one=0;
        int count=0;
        for(int i=0;i<N;i++){
            if(nums[i]==1){
                count++;
            }if(i==N-1){
                if(count>maximum_one){
                    maximum_one=count;
                }
            }
            else if(nums[i]==0){
                if(count>maximum_one){
                    maximum_one=count;
                }
                count=0;
            }
            
        }
        return maximum_one;
    }
};