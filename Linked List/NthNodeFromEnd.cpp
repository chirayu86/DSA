int nthFromEnd(Node *head, int N) {
  
    // create two pointers main_ptr and ref_ptr
    // initially pointing to head.
    Node* main_ptr = head;
    Node* ref_ptr = head;

    // move ref_ptr to the n-th node from beginning.
    for (int i = 1; i < N; i++) {
        ref_ptr = ref_ptr->next;
          
          // If the ref_ptr reaches NULL, then it means 
          // N > length of linked list
        if (ref_ptr == NULL) {
            return -1;
        }
    }

    // move ref_ptr and main_ptr by one node until
    // ref_ptr reaches last node of the list.
    while (ref_ptr->next != NULL) {
        ref_ptr = ref_ptr->next;
        main_ptr = main_ptr->next;
    }

    return main_ptr->data;
}
