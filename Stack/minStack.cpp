class MinStack {
public:
   
   vector<int> stack;
   int tp;
   
    MinStack() {
        tp = -1;
    }
    
    void push(int val) {
        stack.push_back(val);
        tp++;
    }
    
    void pop() {
        stack.pop_back();
        tp--;
    }
    
    int top() {
        return stack[tp];
    }
    
    int getMin() {
        int min = INT_MAX;

        for(int i=0;i<stack.size();i++) {
            if(stack[i]<min) {
                min = stack[i];
            }
        }

        return min;
    }
};
