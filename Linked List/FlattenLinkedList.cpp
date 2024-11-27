Node* flatten(Node* root) {

    vector<int> values;

    while (root != NULL) {
  
        values.push_back(root->data);
        Node* temp = root->bottom;
        while (temp != NULL) {
            values.push_back(temp->data);
            temp = temp->bottom;
        }
        root = root->next;
    }

    sort(values.begin(), values.end());
    Node* tail = NULL;
    Node* head = NULL;
    for (int i = 0; i < values.size(); i++) {
        Node* newNode = new Node(values[i]);

        if (head == NULL) {
            head = newNode;
        }
        else {
            tail->bottom = newNode;
        }
        tail = newNode;
    }
    return head;
}
