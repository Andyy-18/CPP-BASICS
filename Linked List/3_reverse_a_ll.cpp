#include <iostream>
using namespace std;

// 2 methods to reverse a LL:-
// -- Iterator method
// -- Recursive method

class node{
    public:
    int data;
    node* next;

    node(int val) : data(val), next(NULL) {}
};


void insertAtTail(node* &head, int val){
    node * n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    
    node *temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;    
}

void display(node* head){
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Iterator method
// node* reverse(node* &head){ // we have to return the new head node of the reversed LL
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;

//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;

//         prevptr=currptr;
//         currptr=nextptr;
//     }

//     return prevptr;
// }

// recursive way
node* reverseRecursive(node* &head){ // Time complexiry = O(n) cuz we have only traversed the LL once.

    // base case for the recursive fxn -> when only one node or not any node (empty LL)
    if(head==NULL || head->next==NULL)
        return head;

    node* newhead= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    // node* newhead = reverse(head);
    node* newhead = reverseRecursive(head);
    display(newhead);

    return 0;
}