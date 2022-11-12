/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<vector<int>> ans;
    bool od;
    
    void bfs(TreeNode * root){
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            
            int s=q.size();
            vector<int> cur_level;
            for(int i=0;i<s;i++)
            {
                TreeNode* temp =q.front();
                q.pop();
                
                cur_level.push_back(temp ->val);
               
                if(temp->right!=nullptr)
                    q.push(temp->right);
                
                if(temp->left != nullptr)
                    q.push(temp->left);
                
                
                
            }
            if(od)
                od=false;
            
            else{
                reverse(cur_level.begin(),cur_level.end());
                od=true;
            }
            
            ans.push_back(cur_level);
            
        }
        
        
    }
        
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr)
            return ans;
        
        od=false;
        bfs(root);
        
        return ans;
        
    }
};