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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode* , pair<int, int>>> q;
        
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            auto top = q.front();
             q.pop();
            TreeNode* node = top.first;
            int x = top.second.first;
            int y = top.second.second;
           
            
            nodes[x][y].insert(node->val);
            if(node->left) q.push(make_pair((node->left), make_pair(x-1, y+1)));
            if(node->right) q.push(make_pair((node->right), make_pair(x+1, y+1)));
            
        }
        
        vector<vector<int>> ans;
        for(auto i: nodes){
            vector<int> col;
            for(auto p : i.second){
                col.insert(col.end(), p.second.begin(), p.second.end());
            }
            ans.push_back(col);
        }
        
        return ans;
        
    }
};