// Append Last K Nodes of a Linked List
// Means last k nodes of a Linked List should be added to the front of the linked list. 

#include <bits/stdc++.h>
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

// firstly we need the length of the linked list
int length(node* head){
    int l=0;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }

    return l;
}

node* kappend(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail = head;

    int l=length(head);
    k=k%l; // suppose l is 5 but k is given 7 then we need to do this i.e., k>l
    int count = 1; // it will keep track of where we have reached in the linked list

    while(tail->next!=NULL){
        if(count==l-k){
            newTail = tail;
        }
        if(count==k+1){
            newHead = tail;
        }

        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5,6,7};
    for(int i=0; i<6; i++){
        insertAtTail(head, arr[i]);
    }
    display(head);

    node* newhead = kappend(head, 3);
    display(newhead);

    return 0;
}

// Time Complexity of this question is O(n) because we have to traverse the linked list only once.