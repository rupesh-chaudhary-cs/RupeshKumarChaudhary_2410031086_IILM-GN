class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int j=1;
      int leftSum=0;
      int rightSum=0;
      
      int N=nums.size();
      for(int i=0;i<N;i++){
        
        for(int j=i+1;j<N;j++){
            rightSum+=nums[j];
        }
        if(leftSum==rightSum){
            return i;
        }
        leftSum+=nums[i];
        rightSum=0;
      }
      return -1;
    }
};