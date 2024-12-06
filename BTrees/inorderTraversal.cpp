void inorderTraversal(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* current = root;

    while (current != nullptr || !s.empty()) {
        // Traverse to the leftmost node
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }

        // Current is now nullptr, process the top node
        current = s.top();
        s.pop();
        cout << current->val << " "; // Visit the node

        // Move to the right subtree
        current = current->right;
    }
}
