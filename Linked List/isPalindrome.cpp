bool isPalindrome(Node* head) {
    if (!head || !head->next)
        return true;

    // Initialize slow and fast pointers
    Node* slow = head;
    Node* fast = head;

    // Move slow to the middle of the list
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split the list and reverse the second half
    Node* head2 = reverse(slow->next);
    slow->next = nullptr; // End the first half

    // Check if the two halves are identical
    bool ret = isIdentical(head, head2);

    // Restore the original list
    head2 = reverse(head2);
    slow->next = head2;

    return ret;
}
