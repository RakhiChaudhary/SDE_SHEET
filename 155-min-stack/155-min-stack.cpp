class MinStack {
public:
    stack<int>s;
    stack<int>ss;
    
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.empty()||ss.top()>=val){
            ss.push(val);
        }
    }
    
    void pop() {
        if(s.empty())
            return ;
        int ans=s.top();
        s.pop();
        if(ss.top()==ans)
            ss.pop();
        return;
    }
    
    int top() {
        if(s.empty())
            return -1;
       return s.top();
    }
    
    int getMin() {
        if(ss.empty())
            return -1;
        else
            return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */