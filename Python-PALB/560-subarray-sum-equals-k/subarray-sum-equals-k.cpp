class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int N=nums.size();
        int sum=0;
        int count=0;
        for(int i=0;i<N;i++){
            sum+=nums[i];
            if(sum==k){
                count++;
            }
            for(int j=i+1;j<N;j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
            sum=0;
        }
        return count;
    }
};