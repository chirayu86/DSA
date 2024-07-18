#include<iostream>


using namespace std;


struct Node {
  int data;
  Node *next = nullptr;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};


class LinkedList {
 

  public:
  
  Node *head;
  
  LinkedList() {
    this->head = nullptr;
  }

  //insert a node at start 
  void insertAtStart(int data) {
    Node *temp =  new Node(data);
    
    if(head == nullptr) {
        head = temp;
        return;
    }
    
    temp->next = head;
    this->head = temp;
  }
  
 //print the linked list 
 void printList() {
  cout<<endl;
   Node *temp = head;
   while (temp != nullptr) {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   cout<<endl;
 }
  //reverse a linked list 
  void reverse() {
    Node *current = head;
    Node *prev = nullptr;
    Node *next;

    while (current!=nullptr)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    
    this->head = prev;
  }
  
  // detect if linked list has a loop
  bool detectLoop()  {
      Node* slowptr = head;
      Node* fastptr = head;
      
      while(slowptr!=nullptr && fastptr!=nullptr && fastptr->next!=nullptr) {
          slowptr = slowptr->next;
          fastptr = fastptr->next->next;
          
          if(fastptr==slowptr) {
              return 1;
          }
      }
      
      return 0;
  }
  
  //starting point of a loop
  Node* findCycleStart() {

  Node* slow = head;
  Node* fast = head;
  
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      break;
    }
  }
  
  if (!fast || !fast->next) {
    return nullptr;
  }


  slow = head;
  Node* curr = slow;


  while (slow != curr) {
    slow = slow->next;
    curr = curr->next;
  }

  return curr;
}
  
// reverse in intervals
  Node* reverseInInterval(Node *node,int k) {

    if(node == nullptr) {
      return NULL;
    }

    Node* current = node;
    Node *prev = nullptr;
    Node *next;
    int count = 0 ;

    while (current!=nullptr && count<k)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
      count++;
    }

    if(next!=nullptr) {
      node->next = reverseInInterval(next,k);
    }
    
    this->head = prev;
    return prev;
  }
 

};


int main() {
  LinkedList *one = new LinkedList();

  one->insertAtStart(10);
  one->insertAtStart(20);
  one->insertAtStart(30);
  one->insertAtStart(40);
  one->insertAtStart(50);
  one->insertAtStart(60);
  one->insertAtStart(70);
  one->insertAtStart(80);
  
  one->reverseInInterval(one->head,3);
  one->printList();
  
}
