ListNode* deleteDuplicates(ListNode* head) {
       
       ListNode* current = head;

       while(current->next) {
        ListNode* temp = current;

        if(current->val == current->next->val) {
            current->next = current->next->next;
            delete temp;
        } else {
              current = current->next;
        }
        
        }

        return head;
       }
