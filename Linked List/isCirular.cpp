bool isCircular(Node *head) {
        
        Node* temp = head;
        bool isCir = false;
        
        if(!head) {
            return true;
        }
        
        while(temp->next != nullptr) {
            
            temp = temp->next;
            
            if(temp==head) {
                isCir = true;
                break;
            }
            
        }
        
        return isCir;
    }
