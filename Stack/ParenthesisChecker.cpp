bool isBalanced(const string& s) {
    stack<char> st;

    // Process each character in the string
    for (char ch : s) {
        // Push opening brackets onto the stack
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        // Handle closing brackets
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (st.empty()) {
                return false; // Unbalanced: no matching opening bracket
            }

            char top = st.top();
            st.pop();

            // Check if the top of the stack matches the closing bracket
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false; // Unbalanced: mismatched brackets
            }
        }
    }

    // If the stack is empty at the end, the expression is balanced
    return st.empty();
}
