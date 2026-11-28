class MyCircularQueue {
private:
    int count;
    int capacity;
    vector<int>arr;
    int front;
    int rear;

public:
    
    MyCircularQueue(int k) {
        count=0;
        capacity=k;
        arr.resize(k);
        front=0;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(count!=capacity){
            rear=(rear+1)%capacity;
            arr[rear]=value;
            count++;
            return true;
        }else{
            return false;
        }
    }
    
    bool deQueue() {
        if(count>0){
            front=(front+1)%capacity;
            count--;
            return true;
        }else{
            return false;
        }
    }
    
    int Front() {
        if(count==0){
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
       if(count==0){
        return -1;
       }
       return arr[rear];
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */