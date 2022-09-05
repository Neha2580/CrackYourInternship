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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode* node = root;
        vector<int> inorder;
        
        while(true){
            if(node!=NULL){
                stk.push(node);
                node = node->left;
            }
            else{
                if(stk.empty()==true) break;
                node = stk.top();
                stk.pop();
                inorder.push_back(node->val);
                node = node->right;
            }
        }
        
        return inorder;
    }
};