/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;    //any number of children can be there so we use vector 

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     vector<int>result;
    vector<int>preorder(Node *root)
    {
        preordered(root);
        return result;

    }
    void preordered(Node* root) {
       
        int i;
        if(!root)
            return;
        result.push_back(root->val);
        for(i=0;i<root->children.size();i++)   //number of children for that node
        {
            preordered(root->children[i]);

        }
        
    }
};
