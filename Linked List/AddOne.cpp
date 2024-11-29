Node* addOne(Node* head) {
    // Reverse the linked list
    head = reverseList(head);

    // Add 1 to the number
    Node* temp = head;
    int carry = 1;

    while (temp != nullptr) {
        int sum = temp->data + carry;
        temp->data = sum % 10;
        carry = sum / 10;

        // Move to the next node
        if (temp->next == nullptr && carry > 0) {
            // If carry remains at the end, add a new node
            temp->next = new Node(carry);
            carry = 0;
        }
        temp = temp->next;
    }

    // Reverse the linked list back to its original order
    return reverseList(head);
}
