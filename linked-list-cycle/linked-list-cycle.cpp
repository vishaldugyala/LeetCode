/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
            return false;
        
        ListNode *slow = head;
        ListNode *fast = head;
        int i =0;
        while(slow!=NULL && fast!=NULL && fast->next != NULL)
        {
//            fast = slow->next;
            if(slow == fast && i!=0)
                return true;
            
            slow =slow->next;
            fast = fast->next->next;
                
            i += 1;
        }
        return false;
    }
};