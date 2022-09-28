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
        
        int l=0;
        
        ListNode * temp=head;
        
        while(temp!=nullptr)
        {
            l++;
            temp=temp->next;
        }
    
        if(n==l)
        {
            return head->next;
        }
        n=l-n;
        
        temp=head;
        for(int i=0;i<n-1;i++)
        {
            temp=temp->next;
        }
        
        ListNode* t1=temp->next;
        
        temp->next=t1->next;
        
        return head;
        
          
    }
};