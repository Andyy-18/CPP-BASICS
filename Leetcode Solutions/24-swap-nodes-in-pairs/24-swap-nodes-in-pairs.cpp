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
    ListNode* swapPairs(ListNode* head) {
         ListNode* newHead = new ListNode(10);
        newHead->next = head;
        
        ListNode *prev = newHead , *cur = head;
        
        while(cur and cur->next)
        {
            prev->next = cur->next;
            prev = prev->next;
            cur->next= prev->next;
            prev->next = cur;
            cur = cur->next;
            prev = prev->next;
        }
        
        return newHead->next;
    }
};