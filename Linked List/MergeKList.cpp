    Node * mergeKLists(Node *arr[], int K)   {
        for (int i = 1; i < K; i++) {
        while (true) {
            Node *head_0 = arr[0], *head_i = arr[i];
            if (head_i == NULL)
                break;

            if (head_0->data >= head_i->data) {
                arr[i] = head_i->next;
                head_i->next = head_0;
                arr[0] = head_i;
            }
            else
                while (head_0->next != NULL) {
            
                    if (head_0->next->data
                        >= head_i->data) {
                        arr[i] = head_i->next;
                        head_i->next = head_0->next;
                        head_0->next = head_i;
                        break;
                    }
              
                    head_0 = head_0->next;
                    if (head_0->next == NULL) {
                        arr[i] = head_i->next;
                        head_i->next = NULL;
                        head_0->next = head_i;
                        head_0->next->next = NULL;
                        break;
                    }
                }
        }
    }

      return arr[0];
  }
