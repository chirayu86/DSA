class SpecialStack {
private:
    stack<int> mainStack; // Main stack to hold all elements
    stack<int> minStack;  // Auxiliary stack to hold minimums

public:
    // Push an element onto the stack
    void push(int value) {
        mainStack.push(value);
        // Update the minimum stack
        if (minStack.empty() || value <= minStack.top()) {
            minStack.push(value);
        }
    }

    // Pop the top element from the stack
    void pop() {
        if (mainStack.empty()) {
            cout << "Stack underflow!" << endl;
            return;
        }
        int topElement = mainStack.top();
        mainStack.pop();
        // Remove from minStack if it's the minimum
        if (topElement == minStack.top()) {
            minStack.pop();
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return mainStack.empty();
    }

    // Check if the stack is full (arbitrarily defined for illustration)
    bool isFull(int capacity) {
        return mainStack.size() == capacity;
    }

    // Get the top element of the stack
    int top() {
        if (mainStack.empty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Error code for empty stack
        }
        return mainStack.top();
    }

    // Get the minimum element in the stack
    int getMin() {
        if (minStack.empty()) {
            cout << "Stack is empty! No minimum." << endl;
            return -1; // Error code for empty stack
        }
        return minStack.top();
    }
};
