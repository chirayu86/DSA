//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};



// } Driver Code Ends
class Solution
{
    public:
    Node *copyList(Node *head) {
         unordered_map<Node*, Node*> mp;
    Node *temp, *nhead;
   
  
    temp = head;
    nhead = new Node(temp->data);
    mp[temp] = nhead;
   

    while (temp->next != NULL) {
        nhead->next 
            = new Node(temp->next->data);
        temp = temp->next;
        nhead = nhead->next;
        mp[temp] = nhead;
    }
    temp = head;
   
   
    while (temp != NULL) {
        mp[temp]->arb = mp[temp->arb];
        temp = temp->next;
    }
   
    
    return mp[head];
    }

};
