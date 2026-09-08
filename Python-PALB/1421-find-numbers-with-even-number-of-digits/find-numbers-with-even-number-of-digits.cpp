class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int N=nums.size();
        int count_even=0;
        int count=0;
        for(int i=0;i<N;i++){
            int Num=nums[i];
            while(Num>0){
                int last_digit=Num%10;
                count_even++;
                Num=Num/10;
            }
            if(count_even%2==0){
                count++;
            }
            count_even=0;

        }
        return count;
    }
};