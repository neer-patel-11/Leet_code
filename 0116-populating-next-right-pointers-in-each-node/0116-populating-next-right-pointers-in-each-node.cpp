/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
    vector<vector<Node *>> level;
    
    void bfs(Node * root)
    {
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty())
        {
            int s=q.size();
            vector<Node *> curr_level;
            for(int i=0;i<s;i++)
            {
                Node * temp=q.front();
                q.pop();
                curr_level.push_back(temp);
                
                if(temp->left != nullptr)
                {
                    q.push(temp->left);
                }
                if(temp->right !=nullptr)
                {
                    q.push(temp->right);
                }
            }
            level.push_back(curr_level);
        }
        
    }
    
    Node* connect(Node* root) {
        
        if(root ==nullptr)
            return root;
        bfs(root);
        
        for(auto a : level)
        {
            for(int i=0;i<a.size()-1 ; i++)
            {
                
                a[i]->next=a[i+1];
            }
                
        }
        
        return root;
        
    }
};