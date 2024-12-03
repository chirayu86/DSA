
string reverseString(const string& S) {
    stack<char> st;

    // Push all characters onto the stack
    for (char ch : S) {
        st.push(ch);
    }

    // Pop characters from the stack to form the reversed string
    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    return reversed;
}
