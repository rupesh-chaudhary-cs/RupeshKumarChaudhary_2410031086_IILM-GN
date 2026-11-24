class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>s1,s2;
    void push(int x) {
        s2.push(x);
    }
    
    
    int pop() {
        if(s1.empty()){
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        int temp=s1.top();
        s1.pop();
        return temp;
    }
    
    int peek() {
        if(s1.empty()){
            while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        }
        
        return s1.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */