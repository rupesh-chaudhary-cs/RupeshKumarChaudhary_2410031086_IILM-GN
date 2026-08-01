class Solution {
public:
    int duplicates(vector<int>& nums){
        vector<int>v;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(v.empty() || nums[i]!=v[v.size()-1]){
                v.push_back(nums[i]);
                k++;
            }
        }
        nums=v;
        return nums,k;
    }
    int removeDuplicates(vector<int>& nums) {
        return duplicates(nums);
    }
};