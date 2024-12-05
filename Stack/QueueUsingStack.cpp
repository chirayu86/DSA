class QueueUsingStacks {
private:
    stack<int> stack1; // Stack for enqueue
    stack<int> stack2; // Stack for dequeue

public:
    // Enqueue an element into the queue
    void enqueue(int x) {
        stack1.push(x);
    }

    // Dequeue an element from the queue
    int dequeue() {
        if (stack2.empty()) {
            // Transfer all elements from stack1 to stack2 if stack2 is empty
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        if (stack2.empty()) {
            throw runtime_error("Dequeue from empty queue");
        }

        int topElement = stack2.top();
        stack2.pop();
        return topElement;
    }

    // Peek at the front element without removing it
    int peek() {
        if (stack2.empty()) {
            // Transfer all elements from stack1 to stack2 if stack2 is empty
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        if (stack2.empty()) {
            throw runtime_error("Peek from empty queue");
        }

        return stack2.top();
    }

    // Check if the queue is empty
    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }
};
