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
    ListNode* reverseList(ListNode* head) {
        
        
        if(head==nullptr || head->next==nullptr)
            return head;
        
        stack<int> s;
        
        ListNode * temp;
        temp=head;
        
        while(temp!=nullptr)
        {
            s.push(temp->val);
            
            temp=temp->next;
        }
        
        temp=head;
        
        while(temp!=nullptr)
        {
            temp->val=s.top();
            s.pop();
            temp=temp->next;
        }
        
        return head;
        
    }
};