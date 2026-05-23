class Solution {
public:
    
    int reverse(int x) {
        long reverse_number=0;
        while(x!=0){
            int last_digit=x%10;
           
            x=x/10;
            reverse_number=(reverse_number*10)+last_digit;
            if(reverse_number > INT_MAX || reverse_number < INT_MIN){
                return 0;
            }


        }
        return reverse_number;
       

        
    }
};