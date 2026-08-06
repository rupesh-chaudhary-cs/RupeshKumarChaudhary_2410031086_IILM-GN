class Solution {
public:
    void reverse(vector<int>& nums,int i,int j){
       while(i<=j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
       }
    }
    void rotate(vector<int>& nums, int k) {
        int N=nums.size();
        int i=0;
        k=k%N;
        reverse(nums,N-k,N-1);
        reverse(nums,0,N-k-1);
        reverse(nums,0,N-1);
    }
};