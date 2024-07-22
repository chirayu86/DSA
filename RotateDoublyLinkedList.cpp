void rotateByN(Node* &head, int pos)
{
    if(pos==0) return;
  
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=head;
    head->pre=temp;


    int count=1;
    while(count<=pos)
    {
        head=head->next;
        temp=temp->next;
        count++;
    }

    temp->next=NULL;
    head->pre=NULL;
}
