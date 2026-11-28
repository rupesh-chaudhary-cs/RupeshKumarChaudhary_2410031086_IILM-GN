class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int>stk;
       int sum2=0;
       for(string ch:operations){
        if(ch!="C" && ch!="D" && ch!="+"){
            stk.push(stoi(ch));
        }else if(!stk.empty()){
            if(ch=="C"){
                stk.pop();
            }else if(ch=="D"){
                int temp=stk.top();
                int temp2=temp*2;
                stk.push(temp2);
            }else if(ch=="+"){
                int temp3=stk.top();
                stk.pop();
                int temp4=stk.top();
                stk.push(temp3);
                int sum=temp3+temp4;
                stk.push(sum);
            }
        }

       }
       while(!stk.empty()){
        sum2+=stk.top();
        stk.pop();
       }
       return sum2;
    }
};