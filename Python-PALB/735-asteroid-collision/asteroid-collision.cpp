class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>v;
        stack<int>stk;
        for(int i=0;i<asteroids.size();i++){
            bool alive=true;
            while(!stk.empty() && stk.top()>0 && asteroids[i]<0){
                if(abs(stk.top())<abs(asteroids[i])){
                    stk.pop();
                }else if(abs(stk.top())==abs(asteroids[i])){
                    stk.pop();
                    alive=false;
                    break;
                }else{
                    alive=false;
                    break;
                }

               
            }
            if(alive){
                stk.push(asteroids[i]);
            }
            
        }
        while(!stk.empty()){
            v.push_back(stk.top());
            stk.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};