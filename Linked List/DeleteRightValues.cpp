  void reverse(Node* head) {
        Node *current = head;
        Node *prev = nullptr;
        Node *next = nullptr;
        
        while(current!=nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        head = prev;
    }
    
    Node *compute(Node *head) {
        
       reverse(head);
       
       int maxTillNow = head->data;
       Node*temp = head;
       
       while(temp->next!=nullptr&&temp!=nullptr) {
           
           if(temp->next->data<maxTillNow) {
               temp->next = temp->next->next;
           } else {
               maxTillNow = temp->next->data;
               temp = temp->next;
           }
           
           
       }
       
       
        reverse(temp);
        
        return temp;
    }
