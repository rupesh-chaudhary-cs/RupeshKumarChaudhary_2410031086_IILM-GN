class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int N=nums.size();
        for(int i=0;i<N;i++){
            nums[i]=nums[i]*nums[i];
        }
        v=nums;
        sort(v.begin(),v.end());
        return v;
    }
};