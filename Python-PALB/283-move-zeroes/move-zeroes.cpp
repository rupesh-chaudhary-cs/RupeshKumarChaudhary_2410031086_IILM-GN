class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int N=nums.size();
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(nums[i]);
            }
        }
        int j=0;
        for(int i=0;i<N;i++){
            if(nums[i]>0 || nums[i]<0){
                nums[j]=nums[i];
                j++;
            }
        }
        int l=1;
        for(int j=0;j<v.size();j++){
            nums[N-l]=v[j];
            l++;
        }
    }
};