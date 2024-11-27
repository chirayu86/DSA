    Node *moveToFront(Node *head) {
        Node* last = head;
        Node* secLast = nullptr;
        
        while(last->next!=nullptr) {
            secLast = last;
            last = last->next;
        }
        
        secLast->next = nullptr;
        last->next = head;
        head = last;
        
        return head;
    }
