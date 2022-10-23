//328. Odd Even Linked List

/*Question-Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      
      //edge case
      if(head==NULL){
        return head;
      }
      
      //declaring 4 pointers for pointing at even and odd linked list respectively 
      ListNode* evenHead=NULL;
      ListNode* oddHead=NULL;
      ListNode* evenTail=NULL;
      ListNode* oddTail=NULL;
      
      //traversing the entire linked list
      while(head!=NULL)
      {
        //even linked list
        if(head->data%2==0)
        {
          //for first node of even linked list
          if(evenHead==NULL){
            evenHead=head;
            evenTail=head;
          }
          //for subsequent nodes of even linked list
          else{
            evenTail->next=head;
            evenTail=evenTail->next;
          }
        }
        
        //odd linked list
        else{
          //for first node of odd linked list
          if(oddHead==NULL){
            oddHead=head;
            oddTail=head;
          }
          //for subsequent nodes of odd linked list
          else{
            oddTail->next=head;
            oddTail=oddTail->next;
            }
        }
        
        head=head->next;
      }
      
      //connecting the odd and the even linked list together
     if(oddHead==NULL){
       return evenHead;
     }
      
     else{
       oddTail->next=evenHead;
     }
      
      if(evenHead!=NULL){
        evenTail->next=NULL;
      }
      
      //returning the required linked list
      return oddHead;
        
    }
};
