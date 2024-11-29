pair<Node*, Node*> splitList(Node *head) { 
    Node *slow = head; 
    Node *fast = head; 
    
    if(head == nullptr) 
        return {nullptr, nullptr}; 
        
    // For odd nodes, fast->next is head and 
    // for even nodes, fast->next->next is head
    while(fast->next != head && 
          fast->next->next != head) { 
        fast = fast->next->next; 
        slow = slow->next; 
    } 
    
    // If there are even elements in list
    // then move fast
    if(fast->next->next == head) 
        fast = fast->next; 
        
    // Set the head pointer of first half
    Node* head1 = head; 
        
    // Set the head pointer of second half
    Node* head2 = slow->next; 
        
    // Make second half circular
    fast->next = slow->next; 
        
    // Make first half circular
    slow->next = head; 
    
    return {head1, head2};
} 
