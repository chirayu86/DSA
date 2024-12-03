void deleteMiddle(stack<int>& st, int currentIndex, int middleIndex) {
    // Base case: If currentIndex reaches the middle, remove the element
    if (currentIndex == middleIndex) {
        st.pop();
        return;
    }

    // Remove the top element and store it temporarily
    int topElement = st.top();
    st.pop();

    // Recursive call to move closer to the middle
    deleteMiddle(st, currentIndex + 1, middleIndex);

    // Push the top element back after the middle is removed
    st.push(topElement);
}

// Function to delete the middle element of the stack
void deleteMiddleElement(stack<int>& st) {
    if (st.empty()) {
        cout << "Stack is empty. Nothing to delete." << endl;
        return;
    }

    int size = st.size();
    int middleIndex = size / 2; // For 0-based index

    deleteMiddle(st, 0, middleIndex);
}
