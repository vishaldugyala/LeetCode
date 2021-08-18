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
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
            return NULL;
        
        ListNode *slow = head;
        ListNode *fast = head->next;
        unordered_map<ListNode*,int> mp;
        
        for(;slow!=NULL && fast!=NULL && fast->next!=NULL;slow=slow->next,fast=fast->next->next)
        {
            if(slow == fast)
            {
                ListNode *temp= head;
                for(;temp!=NULL;temp=temp->next)
                {
                    if(mp.find(temp) != mp.end())
                        return temp;
                    else
                        mp[temp] += 1;
                }
            }
        }
        
        return NULL;
    }
};