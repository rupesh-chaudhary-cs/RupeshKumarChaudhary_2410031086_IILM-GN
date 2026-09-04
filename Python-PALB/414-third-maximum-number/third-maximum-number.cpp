class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maximum=INT_MIN;
        int secondLargest=INT_MIN;
        int thirdLargest=INT_MIN;
        int count=0;
        int N=nums.size();
        for(int i=0;i<N;i++){
            if(nums[i]>maximum){
                maximum=nums[i];
            }
        }
        for(int i=0;i<N;i++){
            if(nums[i]>secondLargest && nums[i]<maximum){
                secondLargest=nums[i];
            }
        }
        for(int j=0;j<N;j++){
            if(nums[j]>=thirdLargest && nums[j]<secondLargest && nums[j]<maximum){
                thirdLargest=nums[j];
                count++;
            }
        }
        if(count>0){
            return thirdLargest;
        }
        if(count==0){
            return maximum;
        }
        
        return thirdLargest;
    }
};