class Stack {
private:
    std::vector<int> stack; // Using vector to store stack elements

public:
    // Push an element onto the stack
    void push(int value) {
        stack.push_back(value);
    }

    // Remove the top element from the stack
    void pop() {
        if (stack.empty()) {
            std::cout << "Stack underflow! Cannot pop from an empty stack." << std::endl;
            return;
        }
        stack.pop_back();
    }

    // Retrieve the top element of the stack
    int top() {
        if (stack.empty()) {
            std::cerr << "Stack is empty! No top element." << std::endl;
            return -1; // Return an invalid value to indicate error
        }
        return stack.back();
    }

    // Check if the stack is empty
    bool isEmpty() {
        return stack.empty();
    }

    // Return the size of the stack
    size_t size() {
        return stack.size();
    }
};
