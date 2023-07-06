class MyStack {
queue<int>q,q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int i=0;
        while(i<q.size()-1){
            q1.push(q.front());
            q.pop();
        }
        int x=q.front();
        q.pop();
        while(!q1.empty()){
            q.push(q1.front());
            q1.pop();
        }
        return x;
    }
    
    int top() {
        // while(!q.empty()){
        //     q1.push(q.front());
        //     q.pop();
        // }
        // int x=q1.front();
        
        // while(!q1.empty()){
        //     q.push(q1.front());
        //     q1.pop();
        // }
        return q.back();
    }
    
    bool empty() {
        if(q.empty()){
            return true;
        }
        return false;
    }
};



/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */