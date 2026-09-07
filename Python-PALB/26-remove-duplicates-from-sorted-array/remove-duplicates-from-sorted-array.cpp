class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        int count=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=1;
        }
        for(auto it: mpp){
            nums[j]=it.first;
            j++;
            count++;
        }
        return count;
    }
};