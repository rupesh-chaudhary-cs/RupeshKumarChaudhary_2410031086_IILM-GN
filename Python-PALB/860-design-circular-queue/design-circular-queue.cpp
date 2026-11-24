class MyCircularQueue {
private:
    vector<int>arr;
    int front;
    int rear;
    int capacity;
    int count;
public:
    
    MyCircularQueue(int k) {
        arr.resize(k);
        front=0;
        rear=-1;
        capacity=k;
        count=0;
    }
    
    bool enQueue(int value) {
        if(count==capacity){
            return false;
        }
        rear=(rear+1)%capacity;
        arr[rear]=value;
        count++;
        return true;
    }
    
    bool deQueue() {
        if(count==0){
            return false;
        }
        front=(front+1)%capacity;
        count--;
        return true;
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