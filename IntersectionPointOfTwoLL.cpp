int intersectPoint(Node* head1, Node* head2) {
    
  while(head2) {
      Node *temp = head1;
      
      while(temp) {
          
          if(head2==temp) {
              return head2->data;
          }
          
          temp = temp->next;
      }
      
      head2 = head2->next;
  }
  
    return -1;
}
