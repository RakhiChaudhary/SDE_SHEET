class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
      while(input.empty()==false){
      output.push(input.top());
      input.pop();   
      }
       int ans=output.top();
        output.pop();
        while(output.empty()==false){
            input.push(output.top());
            output.pop();
        }
       return ans; 
    }
    
    int peek() {
         while(input.empty()==false){
      output.push(input.top());
      input.pop();   
      }
        int ans= output.top();
         while(output.empty()==false){
            input.push(output.top());
            output.pop();
         }
             return ans;
    }
    
    bool empty() {
        return (input.empty()&&output.empty());
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