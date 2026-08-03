class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        int i=0;
        int N=nums.size();
        if(N<=1){
            return;
        }
        if(k>N){
            k=k%N;
        }
        
        int l=0;
        for(int i=N-k;i<N;i++){
            v.push_back(nums[i]);
        }
        for(int i=N-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(auto it:v){
            nums[l]=it;
            l++;
        }
    }
};