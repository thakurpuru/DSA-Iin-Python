class MyQueue {
public:
    stack<int> s1;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> s2;
       if(s1.empty()){
        s1.push(x);
        return;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
       int r=s1.top();
       s1.pop();
        return r;
    }
    
    int peek() {
      return s1.top();  
    }
    
    bool empty() {
        if(s1.empty()) return true;
        return false;
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