/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

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
    vector<int> postorder(Node* root) {
        postordered(root);
        return result;
    }
    void postordered(Node *root)
    {
        if(!root)
            return;
        int i;
        for(i=0;i<root->children.size();i++)
            postordered(root->children[i]);
        result.push_back(root->val);
    }
};
