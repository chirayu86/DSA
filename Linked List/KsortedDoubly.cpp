Node *sortAKSortedDLL(Node *head, int k) {
    if (head == nullptr || head->next == nullptr)
        return head;

    Node *node = head->next;

    // Perform on all the nodes in the list
    while (node != nullptr) {
        Node *next = node->next;
        Node *curr = node;

        while (curr->prev != nullptr &&
               curr->data < curr->prev->data) {

            // Swap curr and curr->prev node
            Node *node1 = curr->prev->prev; 
            Node *node2 = curr->prev;      
            Node *node3 = curr->next;      
            if (node1 != nullptr)
                node1->next = curr;
            curr->prev = node1;

            node2->next = node3;
            if (node3 != nullptr)
                node3->prev = node2;

            curr->next = node2;
            node2->prev = curr;
        }

        // If curr is now the new head, 
          // then reset head
        if (curr->prev == nullptr)
            head = curr;

        node = next;
    }
    return head;
}
