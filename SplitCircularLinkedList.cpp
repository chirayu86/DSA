 pair<Node *, Node *> splitList(struct Node *head) {
        
            Node *head1_ref;
            Node *head2_ref;
            Node *slowptr = head;
            Node *fastptr = head;
            
            while(fastptr->next!=head && fastptr->next->next!=head) {
                fastptr = fastptr->next->next;
                slowptr = slowptr->next;
            }
            
            if(fastptr->next->next==head) {
                fastptr = fastptr->next;
            }
            
            head1_ref = head;
            
            if(head->next != head) {
                head2_ref = slowptr->next;
            }
            
            fastptr->next = slowptr->next;
            slowptr->next = head;
            
            pair<Node*,Node*> p = {head1_ref,head2_ref};
            return p;
            
    }
