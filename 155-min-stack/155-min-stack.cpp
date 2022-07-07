class MinStack {
public:
    vector< pair<int, int >> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(stack.empty())
        {
            stack.emplace_back(val,val);
            return;
        }
        
        stack.emplace_back(val,min(val,stack.back().second));
        
    }
    
    void pop() {
         stack.erase(stack.end());
    }
    
    int top() {
         return stack.back().first;
    }
    
    int getMin() {
         return stack.back().second;
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