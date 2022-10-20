// https://leetcode.com/problems/add-two-numbers/discuss/1340/A-summary-about-how-to-solve-Linked-List-problem-C%2B%2B

#include <iostream>
using namespace std;

// Since node in Linkedlist is not built in
class node{
    public:
    int data;
    node* next;

    // to make our task easy, let's make a constructor here
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head=n;
}

void insertAtTail(node* &head, int val){ // here we have taken head by reference not by value cuz we want to modify the Linkedlist
    node * n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    // to traverse the linked list, here we have made a temporary iterator or pointer
    node *temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;    
}

void display(node* head){ // here we have taken head by value cuz we dont have to modify our LL here.
    node *temp = head; // if we take head to traverse the LL then also there'll be no probelm and head will not actually traverse
    // cuz we have taken head by value but just to be on safe side and on convetion we have taken temp pointer.
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// searching
bool search(node* head, int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next; // if not write this line, while loop will continue running
    }
    return false;
}

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);

    cout<<search(head, 5)<<endl;
    cout<<search(head, 2)<<endl;
    return 0;
}