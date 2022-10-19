// Detection and Removal of cycle in Linked List
// which is based on Floyd's algorithm or also called Hare and Tortoise Algorithm.

// What is cyclic Linked List?

// Fast and slow pointer
// Fast will go by two steps and slow pointer will run/go by 1 steps
// If they meet or become equal, means there is cycle in the linked list.

#include <iostream>
using namespace std;

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

void makeCycle(node *&head, int pos){
    node* temp = head;
    node *startNode;

    int count = 1;
    while(temp->next!=NULL){
        if(count==pos)
            startNode=temp;
        
        temp=temp->next;
        count++;
    }

    temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
            return true;
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow =slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next)
    {
        slow =slow->next;
        fast=fast->next;
    }

    slow->next=NULL;
}

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);

    makeCycle(head, 3);
    // display(head);
    cout<<detectCycle(head)<<endl;

    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

    return 0;
}

// Now how this algorithm is working. Proof?