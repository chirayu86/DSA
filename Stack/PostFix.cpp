int evaluatePostfix(string S) {
    stack<int> st;

    for (char c : S) {
        // If the character is an operand, push it to the stack
        if (isdigit(c)) {
            st.push(c - '0'); // Convert char to int
        }
        // If the character is an operator, pop two elements and apply the operation
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break; // Assume no division by zero
            }
        }
    }

    // The final result is the only element left in the stack
    return st.top();
}
