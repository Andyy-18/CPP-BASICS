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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(10);
        ListNode *fin = ans;
        int extra = 0;
        
        while(l1 or l2 or extra)
        {
            int val = extra;
            if(l1) val+=l1->val;
            if(l2) val+=l2->val;
            
            ans->next = new ListNode(val%10);
            extra = val/10;
            
            ans = ans->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            
        }
        return fin->next;
    }
};