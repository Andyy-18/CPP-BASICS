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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newHead = new ListNode(-1);
        ListNode* head = newHead;
        
        while(list1 and list2){
            if(list1->val <= list2->val){
                newHead->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else{
                newHead->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            // cout<<newHead->val<<"\n";
            newHead = newHead->next;
        }
        
        while(list1){
            newHead->next = new ListNode(list1->val);
            list1 = list1->next;
            newHead = newHead->next;
        }
        
        while(list2){
            newHead->next = new ListNode(list2->val);
            list2 = list2->next;
            newHead = newHead->next;
        }
       
        return head->next;
    }
};