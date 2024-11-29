 ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast  = head;
        ListNode* temp = head;
        int count  = 0;

        while(temp->next!=nullptr) { 
            count++;
            temp = temp->next;
        }

        while(fast->next!=nullptr && fast->next->next!=nullptr) {
              slow = slow->next;
              fast = fast->next->next;
        }

        if(count%2==0) {
            return slow;
        } else {
            return slow->next;
        }
    }
