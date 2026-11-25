class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>answer(n,0);
        stack<int>stk;
        for(int i=0;i<n;i++){
            while(!stk.empty() && temperatures[i]>temperatures[stk.top()]){
                int pre=stk.top();
                stk.pop();
                answer[pre]=i-pre;
            }
            stk.push(i);
        }
        return answer;
    }
    
};