// Circular Linked List

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head=n;
}

void insertAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    node* n=new node(val);

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void deleteAtHead(node* &head){
    node* temp = head;

    while(temp->next!=head){
        temp = temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;

    while(count!=pos-1){
        temp = temp->next;
        count++;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete; 
}

void display(node* head){
    node* temp = head;
    // while(temp->next!=head) // in this case we'll not be able to print the last node
    // while(temp!=head) // and in this case we are not even able to enter into the loop cuz in the very first node condition become true and we came out of loop.

    // therefore using do while loop
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head); // if here while(temp!=NULL) // then this is infinite loop and system will hang, you can try
    cout<<endl;
}

// if you want to modify like insert and delete in between any position of circular linked list,
// it will same method like Normal or linear linked list.

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);

    deletion(head, 5);
    deletion(head, 1);
    display(head);
    return 0;
}

// to do searching or traversing in circular ll do same as display function (do-while loop).