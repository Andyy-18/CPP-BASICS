#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* newNode = new node(val);

    newNode->next = head;
    if (head!= NULL)
    {
        head->prev = newNode;
    }
    // newNode->prev = NULL; // no need to do already done through constructor.

    head=newNode;
}

void insertAtTail(node* &head, int val){
    node* newNode = new node(val);

    // if(head == NULL){
    //     head=newNode;
    //     return;
    // }
    // or
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* temp=head;
    while(temp->next !=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev=temp;
}

void deleteAtHead(node* &head){
    node* todelete = head;

    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count=1;

    while(temp->next!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next=temp->next;

    if(temp->next!= NULL)
        temp->next->prev=temp->prev;

    delete temp;
}

void display(node *head){
    while(head != NULL){
        cout<<head->data<<"<-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    display(head);

    deletion(head,1);
    display(head);
    deletion(head,4);
    display(head);
    
    return 0;
}