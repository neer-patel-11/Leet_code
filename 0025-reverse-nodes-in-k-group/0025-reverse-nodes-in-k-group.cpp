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
    
    ListNode * rev(ListNode * head , int k)
    {
        vector<int> arr;
        ListNode *temp=head;
        for(int i=0;i<k;i++)
        {
            if(temp==NULL)
                return head;
            
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        reverse(arr.begin(),arr.end());
        
        temp=head;
        for(int i=0;i<k;i++)
        {
            temp->val=arr[i];
            temp=temp->next;
        }
        
        return temp;
            
            
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        int n=0;
        
        ListNode * temp=head;
        
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        
        temp=head;
        for(int i=0; i<n/k ;i++)
        {
            temp=rev(temp,k);
        }
        
        return head;
    }
};