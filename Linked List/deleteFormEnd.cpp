/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* ref = head;


        for(int i=1;i<n;i++) {
            ref = ref->next;

            if(ref==nullptr) {
                return nullptr;
            }
        }

        while(ref->next!=nullptr) {
           ref = ref->next;
           curr = curr->next;
        }
        
        if(curr->next == nullptr) {
            ListNode* temp = head;
            
            if(temp->next ==nullptr) {
                return nullptr;
            }

             while(temp->next->next) {
                temp = temp->next;
             }

             temp->next=nullptr;
             return head;
        }
        
        ListNode* temp = curr->next;
        curr->val = curr->next->val;
        curr->next=curr->next->next;
        delete temp;


        return head;
    }
};
