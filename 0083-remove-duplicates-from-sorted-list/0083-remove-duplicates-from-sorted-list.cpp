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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==nullptr || head->next ==nullptr )
            return head;
        
        ListNode * temp=head->next;
        ListNode * temp_1=head;
        
        
        while(temp != nullptr && temp_1 !=nullptr)
        {
            if(temp->val == temp_1->val)
            {
                temp_1->next=temp->next;
                temp=temp->next;
                continue;
            }
            
            else
            {
                temp=temp->next;
                temp_1=temp_1->next;
            }
        }
        
        
        return head;
        
    }
};