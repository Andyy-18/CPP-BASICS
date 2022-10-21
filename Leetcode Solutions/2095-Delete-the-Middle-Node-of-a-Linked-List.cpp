/*
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
*/

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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL)
     {
         return NULL;
     }
     int countNodes = 0;
     ListNode*temp = head;
     while(temp!=NULL)
     {
         temp = temp->next;
         countNodes++;
     }
    int n = (countNodes/2)-1;
    temp = head;
    while(n--)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
    }
};
