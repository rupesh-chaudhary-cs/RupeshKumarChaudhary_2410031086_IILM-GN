class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v;
        int N=nums.size();
        for(int i=0;i<N;i++){
            if(nums[i]%2==0){
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<N;i++){
            if(nums[i]%2!=0){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};