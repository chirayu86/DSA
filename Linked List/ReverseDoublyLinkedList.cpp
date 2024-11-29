  Node* reverseDLL(Node * head)
    {
        struct Node* temp = NULL;
        struct Node* current = head;
 

    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 

    if (temp != NULL)
        head = temp->prev;
        
        return head;
    }
