class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int evenNumbers=0;
        int N=nums.size();
        for(int i=0;i<N;i++){
            while(nums[i]>0){
                int lastDigit=nums[i]%10;
                nums[i]=nums[i]/10;
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