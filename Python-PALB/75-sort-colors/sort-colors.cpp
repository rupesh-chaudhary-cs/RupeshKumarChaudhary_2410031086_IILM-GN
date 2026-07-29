class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v;
        int N=nums.size();
        for(int i=0;i<N;i++){
            if(nums[i]==0){
                v.push_back(nums[i]);
            }

        }
        for(int i=0;i<N;i++){
            if(nums[i]==1){
                v.push_back(nums[i]);
            }

        }
        for(int i=0;i<N;i++){
            if(nums[i]==2){
                v.push_back(nums[i]);
            }

        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
    }
};