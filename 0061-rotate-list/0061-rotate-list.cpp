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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k==0 || head==nullptr)
            return head;
        
        
        ListNode * temp=head;
        vector<int> arr;
        
        int n=0;
        
        while(temp !=nullptr)
        {
            arr.push_back(temp->val);
            n++;
            temp=temp->next;
            
        }
        
        
        k=k%n;
        
        int index=n-k;
        
        temp=head;
        
        for(int i=index;i<n;i++)
        {
            temp->val=arr[i];
            
            temp=temp->next;
        }
        
        for(int i=0;i<index;i++)
        {
            temp->val=arr[i];
            
            temp=temp->next;
        }
        
        return head;
        
        
        
    }
};