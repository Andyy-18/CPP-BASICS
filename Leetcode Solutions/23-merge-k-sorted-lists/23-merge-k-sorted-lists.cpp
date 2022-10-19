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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* newHead = new ListNode(0);
        ListNode* nitr = newHead;
        
        vector<ListNode*> itr(lists.size());
        
        for(int i = 0;i<lists.size();i++)
            itr[i] = lists[i];
        
        
        while(true){
            
            int mn = 100000;
            int ind = -1;
            
            for(int i = 0;i<itr.size();i++){
                if(itr[i] == NULL) continue;
                if(itr[i]->val<mn) mn = itr[i]->val , ind = i;
            }
            
            if(ind==-1) break;
            
            nitr->next = new ListNode(mn);
            nitr = nitr->next;
            itr[ind] = itr[ind]->next;
        }
        
        return newHead->next;
        
    }
};