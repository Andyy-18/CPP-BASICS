#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val) : data(val), next(NULL) {}
};

void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;

    delete todelete; // must delete otherwise chances of memory leak
}

void deletion(node* &head, int val){
    if(head==NULL)
        return;

    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

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

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    
    deletion(head, 2);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}