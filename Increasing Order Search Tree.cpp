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
    queue<TreeNode *> q;   //Queue to store the nodes after in-order traversal
    void traverse(TreeNode* root)
    {
        if(!root)
            return ;
        traverse(root->left);
        q.push(root);
        traverse(root->right);

    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)  //if root is null return 
            return NULL;
        traverse(root);  //traverse is called and the queue containing the in-order traversal in formed
        TreeNode *Head=q.front();  
        while(!q.empty())
        {
            TreeNode *t=q.front();
            q.pop();
            t->left=NULL;
            if(q.size()>0)
            {
                t->right=q.front();
            }
            else
            {
                t->right=NULL;
            }
        }
        return Head;  //returning the tree strutcure
        
        
    }
};
