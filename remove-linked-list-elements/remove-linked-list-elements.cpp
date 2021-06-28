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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        
        ListNode* p=head;
        ListNode* prev;
        for(;p!=NULL;p=p->next)
        {
            if( p->val == val)
            {
                if(p == dummy->next)
                {
                  dummy->next = p->next;
                    prev = dummy;
                } 
                else
                {
                 prev->next = p->next;   
                 prev = prev;   
                }
            }
            else
            {
                prev=p;
            }
        }

        return dummy->next;
    }
};