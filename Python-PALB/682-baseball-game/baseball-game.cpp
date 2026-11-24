class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>stk;
        int sum=0;
        int n=operations.size();
        for(int i=0;i<n;i++){

            if(operations[i]!="C" && operations[i]!="D" && operations[i]!="+"){
                stk.push(stoi(operations[i]));
            }else if(!stk.empty()){
                if(operations[i]=="C"){
                    stk.pop();
                }else if(operations[i]=="D"){
                    int temp=stk.top();
                    int temp2=temp*2;
                    stk.push(temp2);
                }else if(operations[i]=="+"){
                    int top1=stk.top();
                    stk.pop();
                    int top2=stk.top();
                    stk.push(top1);
                    int temp3=top1+top2;
                    stk.push(temp3);
                }
            }
        }
        while(!stk.empty()){
            sum+=stk.top();
            stk.pop();
        }
        return sum;

    }
};