class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int evenNumbers=0;
        int N=nums.size();
        for(int i=0;i<N;i++){
            int nums1=nums[i];
            while(nums1>0){
                int lastDigit=nums1%10;
                nums1=nums1/10;
                count++;
            }
            if(count%2==0){
                evenNumbers++;
            }
            count=0;
        }
        return evenNumbers;
        
    }
};