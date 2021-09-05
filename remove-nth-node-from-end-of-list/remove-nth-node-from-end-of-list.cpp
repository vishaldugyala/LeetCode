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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = head;
        
        for(int i=0;i<n;i=i+1)
            temp = temp->next;
        
        if(temp == NULL)
        {
            head = head->next;
            return head;
        }
        
        ListNode *it = head;
            
        while(1)
        {
            
            if(temp->next == NULL)
            {
                it->next = it->next->next;
                return head;
            }
            
            temp = temp->next;
            it = it->next;
        }
        
    }
};